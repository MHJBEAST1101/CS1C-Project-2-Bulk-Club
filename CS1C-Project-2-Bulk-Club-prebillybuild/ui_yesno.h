/********************************************************************************
** Form generated from reading UI file 'yesno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YESNO_H
#define UI_YESNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_yesno
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *yesno)
    {
        if (yesno->objectName().isEmpty())
            yesno->setObjectName(QString::fromUtf8("yesno"));
        yesno->resize(400, 300);
        pushButton = new QPushButton(yesno);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 180, 112, 61));
        pushButton_2 = new QPushButton(yesno);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 180, 112, 61));
        lineEdit = new QLineEdit(yesno);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 100, 241, 31));

        retranslateUi(yesno);

        QMetaObject::connectSlotsByName(yesno);
    } // setupUi

    void retranslateUi(QDialog *yesno)
    {
        yesno->setWindowTitle(QApplication::translate("yesno", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("yesno", "YES", nullptr));
        pushButton_2->setText(QApplication::translate("yesno", "NO", nullptr));
        lineEdit->setText(QApplication::translate("yesno", "Would you like to change Membership? ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yesno: public Ui_yesno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YESNO_H
