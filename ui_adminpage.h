/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *adminHomePage;
    QLabel *label;
    QPushButton *addCustomersBttn;
    QPushButton *deleteCustomersBttn;
    QPushButton *addItemBttn;
    QPushButton *deleteItemBttn;
    QPushButton *Close;
    QWidget *addCustomer;
    QPushButton *cancelButton;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *addID;
    QLineEdit *addDay;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *addType;
    QLineEdit *addName;
    QLineEdit *addMonth;
    QLabel *label_5;
    QLineEdit *addYear;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *addButton;
    QWidget *addItem;
    QLineEdit *addItemQty;
    QPushButton *addItemConfirm;
    QLabel *label_19;
    QLineEdit *addItemName;
    QLabel *label_20;
    QPushButton *cancelButton_3;
    QLabel *label_21;
    QLineEdit *addItemPrice;
    QLabel *label_22;
    QLabel *label_23;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName(QString::fromUtf8("AdminPage"));
        AdminPage->resize(800, 600);
        centralwidget = new QWidget(AdminPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 30, 751, 431));
        adminHomePage = new QWidget();
        adminHomePage->setObjectName(QString::fromUtf8("adminHomePage"));
        label = new QLabel(adminHomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 101, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        addCustomersBttn = new QPushButton(adminHomePage);
        addCustomersBttn->setObjectName(QString::fromUtf8("addCustomersBttn"));
        addCustomersBttn->setGeometry(QRect(40, 100, 91, 23));
        deleteCustomersBttn = new QPushButton(adminHomePage);
        deleteCustomersBttn->setObjectName(QString::fromUtf8("deleteCustomersBttn"));
        deleteCustomersBttn->setGeometry(QRect(40, 160, 91, 23));
        addItemBttn = new QPushButton(adminHomePage);
        addItemBttn->setObjectName(QString::fromUtf8("addItemBttn"));
        addItemBttn->setGeometry(QRect(40, 220, 91, 23));
        deleteItemBttn = new QPushButton(adminHomePage);
        deleteItemBttn->setObjectName(QString::fromUtf8("deleteItemBttn"));
        deleteItemBttn->setGeometry(QRect(40, 280, 91, 23));
        Close = new QPushButton(adminHomePage);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(40, 360, 91, 23));
        stackedWidget->addWidget(adminHomePage);
        addCustomer = new QWidget();
        addCustomer->setObjectName(QString::fromUtf8("addCustomer"));
        cancelButton = new QPushButton(addCustomer);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(300, 320, 75, 23));
        label_7 = new QLabel(addCustomer);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 240, 21, 16));
        label_2 = new QLabel(addCustomer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 30, 231, 41));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_4 = new QLabel(addCustomer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 200, 81, 16));
        addID = new QLineEdit(addCustomer);
        addID->setObjectName(QString::fromUtf8("addID"));
        addID->setGeometry(QRect(150, 140, 113, 20));
        addDay = new QLineEdit(addCustomer);
        addDay->setObjectName(QString::fromUtf8("addDay"));
        addDay->setGeometry(QRect(150, 260, 41, 20));
        label_6 = new QLabel(addCustomer);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 240, 21, 16));
        label_3 = new QLabel(addCustomer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 140, 61, 21));
        addType = new QLineEdit(addCustomer);
        addType->setObjectName(QString::fromUtf8("addType"));
        addType->setGeometry(QRect(150, 200, 113, 20));
        addName = new QLineEdit(addCustomer);
        addName->setObjectName(QString::fromUtf8("addName"));
        addName->setGeometry(QRect(150, 80, 113, 20));
        addMonth = new QLineEdit(addCustomer);
        addMonth->setObjectName(QString::fromUtf8("addMonth"));
        addMonth->setGeometry(QRect(220, 260, 41, 20));
        label_5 = new QLabel(addCustomer);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 260, 91, 16));
        addYear = new QLineEdit(addCustomer);
        addYear->setObjectName(QString::fromUtf8("addYear"));
        addYear->setGeometry(QRect(290, 260, 51, 20));
        label_8 = new QLabel(addCustomer);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 240, 47, 13));
        label_9 = new QLabel(addCustomer);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 80, 61, 16));
        addButton = new QPushButton(addCustomer);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(160, 320, 75, 23));
        stackedWidget->addWidget(addCustomer);
        addItem = new QWidget();
        addItem->setObjectName(QString::fromUtf8("addItem"));
        addItemQty = new QLineEdit(addItem);
        addItemQty->setObjectName(QString::fromUtf8("addItemQty"));
        addItemQty->setGeometry(QRect(244, 300, 81, 20));
        addItemConfirm = new QPushButton(addItem);
        addItemConfirm->setObjectName(QString::fromUtf8("addItemConfirm"));
        addItemConfirm->setGeometry(QRect(174, 380, 75, 23));
        label_19 = new QLabel(addItem);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(144, 240, 61, 16));
        addItemName = new QLineEdit(addItem);
        addItemName->setObjectName(QString::fromUtf8("addItemName"));
        addItemName->setGeometry(QRect(244, 190, 161, 20));
        label_20 = new QLabel(addItem);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(144, 300, 71, 16));
        cancelButton_3 = new QPushButton(addItem);
        cancelButton_3->setObjectName(QString::fromUtf8("cancelButton_3"));
        cancelButton_3->setGeometry(QRect(364, 380, 75, 23));
        label_21 = new QLabel(addItem);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(144, 190, 51, 16));
        addItemPrice = new QLineEdit(addItem);
        addItemPrice->setObjectName(QString::fromUtf8("addItemPrice"));
        addItemPrice->setGeometry(QRect(244, 240, 81, 20));
        label_22 = new QLabel(addItem);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(140, 150, 461, 20));
        label_23 = new QLabel(addItem);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(244, 90, 121, 41));
        QFont font2;
        font2.setPointSize(15);
        label_23->setFont(font2);
        stackedWidget->addWidget(addItem);
        AdminPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AdminPage->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminPage->setStatusBar(statusbar);

        retranslateUi(AdminPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QMainWindow *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AdminPage", "ADMIN PAGE", nullptr));
        addCustomersBttn->setText(QCoreApplication::translate("AdminPage", "Add Customer", nullptr));
        deleteCustomersBttn->setText(QCoreApplication::translate("AdminPage", "Delete Customer", nullptr));
        addItemBttn->setText(QCoreApplication::translate("AdminPage", "Add Item", nullptr));
        deleteItemBttn->setText(QCoreApplication::translate("AdminPage", "Delete Item", nullptr));
        Close->setText(QCoreApplication::translate("AdminPage", "Close", nullptr));
        cancelButton->setText(QCoreApplication::translate("AdminPage", "Cancel", nullptr));
        label_7->setText(QCoreApplication::translate("AdminPage", "MM", nullptr));
        label_2->setText(QCoreApplication::translate("AdminPage", "Add Customer", nullptr));
        label_4->setText(QCoreApplication::translate("AdminPage", "Customer Type", nullptr));
        label_6->setText(QCoreApplication::translate("AdminPage", "DD", nullptr));
        label_3->setText(QCoreApplication::translate("AdminPage", "Customer ID", nullptr));
        label_5->setText(QCoreApplication::translate("AdminPage", "Expiration Date", nullptr));
        label_8->setText(QCoreApplication::translate("AdminPage", "YYYY", nullptr));
        label_9->setText(QCoreApplication::translate("AdminPage", "Name", nullptr));
        addButton->setText(QCoreApplication::translate("AdminPage", "Add", nullptr));
        addItemConfirm->setText(QCoreApplication::translate("AdminPage", "Add Item", nullptr));
        label_19->setText(QCoreApplication::translate("AdminPage", "Item Price", nullptr));
        label_20->setText(QCoreApplication::translate("AdminPage", "Item Quantity", nullptr));
        cancelButton_3->setText(QCoreApplication::translate("AdminPage", "Cancel", nullptr));
        label_21->setText(QCoreApplication::translate("AdminPage", "Item Name", nullptr));
        label_22->setText(QCoreApplication::translate("AdminPage", "Please fill in all fields to add a new item to the database", nullptr));
        label_23->setText(QCoreApplication::translate("AdminPage", "Add Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
