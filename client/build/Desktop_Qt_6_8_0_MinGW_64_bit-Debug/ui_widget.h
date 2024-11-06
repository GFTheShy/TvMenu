/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *ok;
    QPushButton *quit;
    QPushButton *right;
    QPushButton *left;
    QPushButton *menu;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(300, 400);
        Widget->setMinimumSize(QSize(300, 400));
        Widget->setMaximumSize(QSize(300, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/1/image/yaokqi.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0.5);"));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        ok = new QPushButton(Widget);
        ok->setObjectName("ok");
        ok->setMinimumSize(QSize(80, 80));
        ok->setMaximumSize(QSize(80, 80));
        ok->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgba(255, 255, 255, 128); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */  \n"
"    border: 2px solid black; /* \351\273\221\350\211\262\350\276\271\346\241\206 */  \n"
"    border-radius: 40px; /* \345\234\206\345\275\242\350\276\271\346\241\206 */  \n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */  \n"
"}  \n"
"QPushButton:hover {  \n"
"    background-color: rgba(255, 0, 0, 128); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\347\272\242\350\211\262 */  \n"
"}  \n"
"QPushButton:pressed {  \n"
"    background-color: rgba(0, 0, 255, 128); /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\350\223\235\350\211\262 */  \n"
"    border-style: inset; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217\345\217\230\344\270\272\345\206\205"
                        "\345\265\214 */  \n"
"}"));

        gridLayout->addWidget(ok, 1, 1, 1, 1);

        quit = new QPushButton(Widget);
        quit->setObjectName("quit");
        quit->setMinimumSize(QSize(80, 80));
        quit->setMaximumSize(QSize(80, 80));
        quit->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgba(255, 255, 255, 128); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */  \n"
"    border: 2px solid black; /* \351\273\221\350\211\262\350\276\271\346\241\206 */  \n"
"    border-radius: 25px; /* \345\234\206\345\275\242\350\276\271\346\241\206 */  \n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */  \n"
"}  \n"
"QPushButton:hover {  \n"
"    background-color: rgba(255, 0, 0, 128); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\347\272\242\350\211\262 */  \n"
"}  \n"
"QPushButton:pressed {  \n"
"    background-color: rgba(0, 0, 255, 128); /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\350\223\235\350\211\262 */  \n"
"    border-style: inset; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217\345\217\230\344\270\272\345\206\205"
                        "\345\265\214 */  \n"
"}"));

        gridLayout->addWidget(quit, 2, 1, 1, 1);

        right = new QPushButton(Widget);
        right->setObjectName("right");
        right->setMinimumSize(QSize(80, 80));
        right->setMaximumSize(QSize(80, 80));
        right->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgba(255, 255, 255, 128); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */  \n"
"    border: 2px solid black; /* \351\273\221\350\211\262\350\276\271\346\241\206 */  \n"
"    border-radius: 25px; /* \345\234\206\345\275\242\350\276\271\346\241\206 */  \n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */  \n"
"}  \n"
"QPushButton:hover {  \n"
"    background-color: rgba(255, 0, 0, 128); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\347\272\242\350\211\262 */  \n"
"}  \n"
"QPushButton:pressed {  \n"
"    background-color: rgba(0, 0, 255, 128); /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\350\223\235\350\211\262 */  \n"
"    border-style: inset; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217\345\217\230\344\270\272\345\206\205"
                        "\345\265\214 */  \n"
"}"));

        gridLayout->addWidget(right, 1, 2, 1, 1);

        left = new QPushButton(Widget);
        left->setObjectName("left");
        left->setMinimumSize(QSize(80, 80));
        left->setMaximumSize(QSize(80, 80));
        left->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgba(255, 255, 255, 128); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */  \n"
"    border: 2px solid black; /* \351\273\221\350\211\262\350\276\271\346\241\206 */  \n"
"    border-radius: 25px; /* \345\234\206\345\275\242\350\276\271\346\241\206 */  \n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */  \n"
"}  \n"
"QPushButton:hover {  \n"
"    background-color: rgba(255, 0, 0, 128); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\347\272\242\350\211\262 */  \n"
"}  \n"
"QPushButton:pressed {  \n"
"    background-color: rgba(0, 0, 255, 128); /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\350\223\235\350\211\262 */  \n"
"    border-style: inset; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217\345\217\230\344\270\272\345\206\205"
                        "\345\265\214 */  \n"
"}"));

        gridLayout->addWidget(left, 1, 0, 1, 1);

        menu = new QPushButton(Widget);
        menu->setObjectName("menu");
        menu->setMinimumSize(QSize(80, 80));
        menu->setMaximumSize(QSize(80, 80));
        menu->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    background-color: rgba(255, 255, 255, 128); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */  \n"
"    border: 2px solid black; /* \351\273\221\350\211\262\350\276\271\346\241\206 */  \n"
"    border-radius: 25px; /* \345\234\206\345\275\242\350\276\271\346\241\206 */  \n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */  \n"
"}  \n"
"QPushButton:hover {  \n"
"    background-color: rgba(255, 0, 0, 128); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\347\272\242\350\211\262 */  \n"
"}  \n"
"QPushButton:pressed {  \n"
"    background-color: rgba(0, 0, 255, 128); /* \351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\345\217\230\344\270\272\345\215\212\351\200\217\346\230\216\350\223\235\350\211\262 */  \n"
"    border-style: inset; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217\345\217\230\344\270\272\345\206\205"
                        "\345\265\214 */  \n"
"}"));

        gridLayout->addWidget(menu, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\351\201\245\346\216\247\345\231\250", nullptr));
        ok->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        quit->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236", nullptr));
        right->setText(QCoreApplication::translate("Widget", "\345\217\263", nullptr));
        left->setText(QCoreApplication::translate("Widget", "\345\267\246", nullptr));
        menu->setText(QCoreApplication::translate("Widget", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
