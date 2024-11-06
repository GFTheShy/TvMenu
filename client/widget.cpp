#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    udpSocket = new QUdpSocket(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::sendDataToServer(const QByteArray& data)
{
    QHostAddress serverAddress("172.19.233.31");
    quint16 serverPort = 9000;
    udpSocket->writeDatagram(data, serverAddress, serverPort);
}

void Widget::on_ok_clicked()
{
    sendDataToServer("90");
}


void Widget::on_left_clicked()
{
    sendDataToServer("91");
}

void Widget::on_right_clicked()
{
    sendDataToServer("92");
}

void Widget::on_quit_clicked()
{
    sendDataToServer("93");
}

void Widget::on_menu_clicked()
{
    sendDataToServer("94");
}

