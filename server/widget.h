#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>
#include <QDebug>
#include <QVector>
#include <QPushButton>
#include <QTimer>
#include <QFile>
#include <QTabBar>
#include <QTabWidget>
#include <QPainter>
#include <QStyleOptionTab>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void readfunc();    //服务器响应客户端信息
signals:
    void Sub1Signal(int value);  //对应一级子菜单的第一个模式发生改变的信号
private:
    //对应按键的函数调用
    void Ok();
    void Left();
    void Right();
    void Menu();
    void Quit();

    void JiaZaiMenu();  //加载菜单
    void JiaZaiYuYang();    //加载语言

    void setNormalStyle(QPushButton* button);  //正常按钮
    void setFocusedStyle(QPushButton* button); //光标所在按钮

    void SetLanguage(QStringList Language);  //设置语言

    void DoListen(QVector<QPushButton*> sub);  //检测改变模式后是什么模式

    void TangChuang();  //弹窗提示

private:
    Ui::Widget *ui;
    QUdpSocket* udpSocket;

    bool MenuFlag = false;  //菜单是否隐藏，默认为关
    int JiCount;  //记录当前所在第几级目录

    int FirstCount;   //记录一级菜单的最大个数

    int CurrentSubMenu;  //记录当前所在的第二级目录
    int SecCount = 0;  //记录当前在二级菜单下的位置，默认为第一个
    int MaxCount = 0;  //二级菜单的最大选项

    QVector<QPushButton*> Sub1, Sub2, Sub3, Sub4, Sub5;//子菜单


    QVector<QVector<QPushButton*>> SubS;//子菜单集合

    //弹窗提示的文本，默认为英语，语言变化时改变
    QString TiSi = "Change Successful!";

    //语言种类
    QStringList cn;   //中文
    QStringList english;  //英文

};
#endif // WIDGET_H
