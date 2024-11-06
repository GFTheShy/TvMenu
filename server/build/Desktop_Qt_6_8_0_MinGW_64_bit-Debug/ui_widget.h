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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_19;
    QPushButton *pushButton_18;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_21;
    QPushButton *pushButton_20;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(563, 194);
        Widget->setMinimumSize(QSize(563, 194));
        Widget->setMaximumSize(QSize(563, 194));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/tv.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(6, 6, 551, 182));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{width:100}\n"
"\n"
"QTabBar::tab{height:40;}\n"
"\n"
"QTabWidget::pane {\n"
"           border: none;\n"
"       }\n"
"\n"
"QTabWidget::tab-bar { \n"
"	alignment: center; \n"
"} \n"
""));
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        tabWidget->setElideMode(Qt::TextElideMode::ElideMiddle);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 20);
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setMaximumSize(QSize(100, 16777215));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/dtv.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
" QPushButton {\n"
"           border - radius: 15px; \n"
"       }"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, -1, 20);
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/ATV.png")));
        label_2->setScaledContents(true);

        verticalLayout_2->addWidget(label_2);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pushButton_2);

        verticalLayout_2->setStretch(1, 5);

        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, -1, 20);
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/AV.png")));
        label_3->setScaledContents(true);

        verticalLayout_3->addWidget(label_3);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(pushButton_3);

        verticalLayout_3->setStretch(1, 5);

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, -1, -1, 20);
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/HDMI.png")));
        label_4->setScaledContents(true);

        verticalLayout_4->addWidget(label_4);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(pushButton_4);

        verticalLayout_4->setStretch(1, 5);

        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, -1, -1, 20);
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(100, 16777215));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/image/HDMI.png")));
        label_5->setScaledContents(true);

        verticalLayout_5->addWidget(label_5);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 30));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(pushButton_5);

        verticalLayout_5->setStretch(1, 5);

        horizontalLayout->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_4 = new QHBoxLayout(tab_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMinimumSize(QSize(0, 80));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"       QPushButton {\n"
"           border - radius: 25px; \n"
"       }"));

        horizontalLayout_4->addWidget(pushButton_8);

        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setMinimumSize(QSize(0, 80));
        pushButton_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setMinimumSize(QSize(0, 80));
        pushButton_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_9);

        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(0, 80));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 80));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_6);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        horizontalLayout_5 = new QHBoxLayout(tab_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_14 = new QPushButton(tab_3);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(0, 80));
        pushButton_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(tab_3);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setMinimumSize(QSize(0, 80));
        pushButton_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButton_15);

        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setMinimumSize(QSize(0, 80));
        pushButton_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButton_13);

        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setMinimumSize(QSize(0, 80));
        pushButton_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 80));
        pushButton_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButton_11);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        horizontalLayout_6 = new QHBoxLayout(tab_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_19 = new QPushButton(tab_4);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setMinimumSize(QSize(0, 80));
        pushButton_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(pushButton_19);

        pushButton_18 = new QPushButton(tab_4);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setMinimumSize(QSize(0, 80));
        pushButton_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(pushButton_18);

        pushButton_17 = new QPushButton(tab_4);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setMinimumSize(QSize(0, 80));
        pushButton_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(pushButton_17);

        pushButton_16 = new QPushButton(tab_4);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setMinimumSize(QSize(0, 80));
        pushButton_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(pushButton_16);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        horizontalLayout_7 = new QHBoxLayout(tab_5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_21 = new QPushButton(tab_5);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setMinimumSize(QSize(120, 80));
        pushButton_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(pushButton_21);

        pushButton_20 = new QPushButton(tab_5);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setMinimumSize(QSize(120, 80));
        pushButton_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(pushButton_20);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        tabWidget->addTab(tab_5, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "DTV", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Widget", "ATV", nullptr));
        label_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Widget", "AV", nullptr));
        label_4->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("Widget", "HDMI1", nullptr));
        label_5->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("Widget", "HDMI2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "Source", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "Standard", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "Dynamic", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "Soft", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "Vivid", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "Energy", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "Picture", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Widget", "Standard", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Widget", "Music", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Widget", "Movie", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "News", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "User", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "Sound", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Widget", "Country", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Widget", "Antenna Type", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Widget", "Signal Information", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Widget", "Scan", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Widget", "Channel", nullptr));
        pushButton_21->setText(QCoreApplication::translate("Widget", "English", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Widget", "Chinese", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Widget", "Common", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
