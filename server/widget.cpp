#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //去掉窗口边框
    setWindowFlags(Qt::FramelessWindowHint);

    //设置tabwidget的tab
    QTabBar *tabBar = ui->tabWidget->tabBar();
    tabBar->setStyleSheet("QTabWidget QTabBar::tab:selected { background - color: darkBlue; color: yellow; font - size: 16px; }"
                          "QTabWidget QTabBar::tab:!selected { background - color: lightGray; color: white; font - size: 14px; }"
                          "QTabWidget QTabBar::tab { border - radius: 10px; min - width: 80px; min - height: 30px; }");

    // 绑定端口
    udpSocket = new QUdpSocket(this);

    if (udpSocket->bind(QHostAddress::Any, 9000))
    {
        qDebug() << "服务器已成功绑定端口9000";
    }
    else
    {
        qDebug() << "服务器绑定端口失败";
    }
    // 连接信号和槽，用于接收数据
    connect(udpSocket, &QUdpSocket::readyRead, this, &Widget::readfunc);

    //菜单初始化
    JiaZaiMenu();


    //初始化计数和最大数
    JiCount = 0;
    CurrentSubMenu = ui->tabWidget->currentIndex();
    FirstCount = ui->tabWidget->count();
    //qDebug()<<"geshu:::: "<<FirstCount;

    //设置所有按钮有check功能，并且默认都是选中第一个为选项，设置按钮样式
    for(auto it:SubS)
    {
        for(auto button:it)
        {
            button->setCheckable(true);
            setNormalStyle(button);
        }

        it[0]->setChecked(true);
    }

    JiaZaiYuYang();  //加载语言
}

Widget::~Widget()
{
    delete ui;
}

void Widget::readfunc()
{
    QByteArray datagram;
    while (udpSocket->hasPendingDatagrams())
    {

        datagram.resize(udpSocket->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;
        // 读取数据报
        udpSocket->readDatagram(datagram.data(), datagram.size(), &sender, &senderPort);
        //qDebug() << "从 " << sender.toString() << " 端口 " << senderPort << " 接收到数据: " << datagram;
    }
    int msg = datagram.toInt();
    //qDebug()<<"msg"<<msg;

     /*
     *遥控器按键：
     *  确认：90
     *  左：91
     *  右：92
     *  返回：93
     *  菜单：94
    */
    //只在菜单显示的时候可以操作
    if(MenuFlag == false)
    {
        if(msg == 94) Menu();
    }
    else
    {
        if(msg == 90) Ok();
        else if(msg == 91) Left();
        else if(msg == 92)  Right();
        else if(msg == 93)  Quit();
        else if(msg == 94) Menu();
    }
}

void Widget::Ok()
{
   // qDebug()<<"ok";
    if(JiCount == 0)    //在一级菜单
    {
        JiCount++;
        MaxCount = SubS[CurrentSubMenu].length()-1;
        //qDebug()<<"当前子菜单长度为："<<MaxCount;
        SecCount = 0;  //设置每次都是默认为第一个开始
        setFocusedStyle(SubS[CurrentSubMenu][SecCount]);  //设置当前光标为聚焦
    }
    else if(JiCount == 1)
    {
        //对当前模式按确认不响应
        if(SubS[CurrentSubMenu][SecCount]->isChecked() == false)
        {
            //取消所有选项
            for(auto it:SubS[CurrentSubMenu])
            {
                it->setChecked(false);
            }
            //选中当前选项
            SubS[CurrentSubMenu][SecCount]->setChecked(true);

            DoListen(SubS[CurrentSubMenu]);  //检查并执行模式改变后的行为

           // qDebug()<<"弹出窗口";
            TangChuang();//调用弹窗函数
        }
    }
}

void Widget::Left()
{
    //qDebug()<<"left";
    if(JiCount == 0)  //在一级菜单
    {
        if(CurrentSubMenu == 0) CurrentSubMenu = 4;
        else CurrentSubMenu = CurrentSubMenu-1;
        ui->tabWidget->setCurrentIndex(CurrentSubMenu);
    }
    else if(JiCount == 1)  //在二级菜单
    {
        int temp = SecCount;
        if(SecCount == 0) SecCount = MaxCount;
        else SecCount = SecCount-1;

        setNormalStyle(SubS[CurrentSubMenu][temp]);
        setFocusedStyle(SubS[CurrentSubMenu][SecCount]);
    }
}

void Widget::Right()
{
    //qDebug()<<"right";
    if(JiCount == 0)  //在一级菜单
    {
        if(CurrentSubMenu == 4) CurrentSubMenu = 0;
        else CurrentSubMenu = CurrentSubMenu+1;
        ui->tabWidget->setCurrentIndex(CurrentSubMenu);
    }
    else if(JiCount == 1)  //在二级菜单
    {
        int temp = SecCount;
        if(SecCount == MaxCount) SecCount = 0;
        else SecCount = SecCount+1;

        setNormalStyle(SubS[CurrentSubMenu][temp]);
        setFocusedStyle(SubS[CurrentSubMenu][SecCount]);
    }
}

void Widget::Quit()
{
   // qDebug()<<"quit";
    if(JiCount == 0)
    {
        //隐藏窗口
        this->hide();
        MenuFlag = false;
    }
    else if(JiCount == 1)
    {
        JiCount--;
        setNormalStyle(SubS[CurrentSubMenu][SecCount]);
    }
}

void Widget::Menu()
{
    //qDebug()<<"menu";
    if(MenuFlag == false) this->show();
    else this->hide();
    MenuFlag = !MenuFlag;
}

void Widget::JiaZaiMenu()
{
    Sub1.push_back(ui->pushButton);
    Sub1.push_back(ui->pushButton_2);
    Sub1.push_back(ui->pushButton_3);
    Sub1.push_back(ui->pushButton_4);
    Sub1.push_back(ui->pushButton_5);

    Sub2.push_back(ui->pushButton_8);
    Sub2.push_back(ui->pushButton_10);
    Sub2.push_back(ui->pushButton_9);
    Sub2.push_back(ui->pushButton_7);
    Sub2.push_back(ui->pushButton_6);

    Sub3.push_back(ui->pushButton_14);
    Sub3.push_back(ui->pushButton_15);
    Sub3.push_back(ui->pushButton_13);
    Sub3.push_back(ui->pushButton_12);
    Sub3.push_back(ui->pushButton_11);

    Sub4.push_back(ui->pushButton_19);
    Sub4.push_back(ui->pushButton_18);
    Sub4.push_back(ui->pushButton_17);
    Sub4.push_back(ui->pushButton_16);

    Sub5.push_back(ui->pushButton_21);
    Sub5.push_back(ui->pushButton_20);

    SubS.push_back(Sub1);
    SubS.push_back(Sub2);
    SubS.push_back(Sub3);
    SubS.push_back(Sub4);
    SubS.push_back(Sub5);

}

void Widget::JiaZaiYuYang()
{
    //加载语言,中文
    QFile file(":/yuyan/cn.txt.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QByteArray byteArray = file.readAll();
        QString content = QString::fromUtf8(byteArray);
        cn = content.split("\n");
        file.close();
        //qDebug() << "中文加载完毕"<<cn.size();
    }
    else
    {
        //qDebug() << "无法打开文件";
    }

    //输出字符串数组中的内容
    // for (const QString& str : cn)
    // {
    //     qDebug() << str<<" | ";
    // }


    //加载语言,英语
    QFile file1(":/yuyan/english.txt.txt");
    if (file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file1);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            english.append(line);
        }
        file1.close();
        //qDebug() << "英语加载完毕"<<english.size();
    }
    else
    {
        //qDebug() << "无法打开文件";
    }

    // 输出字符串数组中的内容
    // for (const QString& str : english)
    // {
    //     qDebug() << str<<" | ";
    // }
}

void Widget::setNormalStyle(QPushButton* button)
{
    button->setStyleSheet("QPushButton {"
                              "color: white; /* 文字颜色为黑色*/"
                              "font-size: 14px; /* 文字大小为9px*/"
                              "}");
}

void Widget::setFocusedStyle(QPushButton* button)
{
    //qDebug()<<"调用setFocusedStyle";
    button->setStyleSheet("QPushButton {"
                              "color: red; /* 文字颜色为红色*/"
                              "font-size: 24px; /* 文字大小为14px*/"
                              "} "
                              "QPushButton:focus {"
                              "color: white; /* 选中时文字颜色变为白色，形成高亮对比 */"
                              "font-size: 24px; /* 选中时文字大小变为16px */"
                              "background-color: blue; /* 可添加背景色，使文字更突出 */"
                              "padding: 2px; /* 适当添加内边距，让文字显示更饱满 */"
                              "}");
}

void Widget::SetLanguage(QStringList Language)
{
    if(Language.isEmpty() == false)  //如果语言加载失败的话不响应
    {
        int k=0;  //记录语言字符的数量
        //设置一级菜单语言
        for(int i=0;i<5;i++)
            ui->tabWidget->setTabText(i,Language[k++]);
        //设置二级菜单语言
        for(auto it:SubS)
        {
            for(auto button:it)
            {
                button->setText(Language[k++]);
            }
        }
        //设置弹窗语言文本
        TiSi = Language[k];
    }
}

void Widget::DoListen(QVector<QPushButton*> sub)
{
    //判断是那个子菜单发生变化
    if(sub == Sub1)
    {
        for(int i=0;i<sub.length();i++)
        {
            if(sub[i]->isChecked())  //找到选中的模式,是第几个就传递给第几个
            {
                Sub1Signal(i);
            }
        }
    }
    else if(sub == Sub2) {}
    else if(sub == Sub3) {}
    else if(sub == Sub4) {}
    else if(sub == Sub5)
    {
        for(auto it: sub)
        {
            if(it->isChecked())  //找到选中的模式
            {
                if(it == ui->pushButton_21)  SetLanguage(english);//选择变为英语
                else if(it == ui->pushButton_20)    SetLanguage(cn);//选择变为中文
                break;
            }
        }
    }
}

void Widget::TangChuang()
{
    // 创建新的Widget作为弹窗容器
    QWidget *popupWidget = new QWidget(this);
    // 设置新Widget的大小，这里设置为比主Widget更大，可根据实际需求调整

    // 设置样式表使widget全透明
    popupWidget->setStyleSheet("QWidget { background-color: rgba(0, 0, 0, 0);}");

    popupWidget->setFixedSize(500, 2000);

    // 创建按钮并添加到新Widget上
    QPushButton *msgbox = new QPushButton(TiSi, popupWidget);
    // 设置按钮大小,样式
    msgbox->setFixedSize(120, 30);
    msgbox->setStyleSheet("QPushButton { background - color: rgb(0, 255, 0); color: blue; font - size: 16px; }");

    // 设置按钮在新Widget中的位置使其显示在正上方
    int xPos = (popupWidget->width() / 2)-30;
    int yPos = 50; // 将按钮的y坐标设置为一个较小的值，使其显示在新Widget的正上方，可根据实际需求调整
    msgbox->move(xPos, yPos);

    // 创建定时器
    QTimer *timer = new QTimer(msgbox);

    // 连接定时器超时信号到删除按钮的槽函数
    QObject::connect(timer, &QTimer::timeout, msgbox, &QPushButton::deleteLater);
    QObject::connect(timer, &QTimer::timeout, popupWidget, &QWidget::deleteLater);
    // 设置定时器超时时间为3秒（3000毫秒）
    timer->start(3000);

    // 先显示新Widget，再显示按钮
    popupWidget->show();
    msgbox->show();
}
