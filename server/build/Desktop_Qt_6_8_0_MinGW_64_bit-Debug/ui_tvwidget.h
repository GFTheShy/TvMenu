/********************************************************************************
** Form generated from reading UI file 'tvwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TVWIDGET_H
#define UI_TVWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TVWidget
{
public:

    void setupUi(QWidget *TVWidget)
    {
        if (TVWidget->objectName().isEmpty())
            TVWidget->setObjectName("TVWidget");
        TVWidget->resize(800, 600);
        TVWidget->setMinimumSize(QSize(800, 600));
        TVWidget->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/tv.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TVWidget->setWindowIcon(icon);

        retranslateUi(TVWidget);

        QMetaObject::connectSlotsByName(TVWidget);
    } // setupUi

    void retranslateUi(QWidget *TVWidget)
    {
        TVWidget->setWindowTitle(QCoreApplication::translate("TVWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TVWidget: public Ui_TVWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TVWIDGET_H
