#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QHostAddress>
#include <QUdpSocket>

/*
 *遥控器按键：
 *  确认：90
 *  左：91
 *  右：92
 *  返回：93
 *  菜单：94
*/

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
    void on_ok_clicked();

    void on_left_clicked();

    void on_right_clicked();

    void on_quit_clicked();

    void on_menu_clicked();

private:
    Ui::Widget *ui;
    QUdpSocket* udpSocket;
    void sendDataToServer(const QByteArray& data);

};
#endif // WIDGET_H
