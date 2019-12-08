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
#include <QtWidgets/QComboBox>
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
    QPushButton *createPurchasesBtn;
    QWidget *CreatePurchasesPage;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *addYearLineEdit;
    QLineEdit *addNameLineEdit;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *addDayLineEdit;
    QLineEdit *addMonthLineEdit;
    QLabel *label_17;
    QLineEdit *addIdLineEdit;
    QLabel *label_18;
    QComboBox *pickItemComboBox;
    QLabel *label_24;
    QComboBox *pickQtyLComboBox;
    QPushButton *createPurchasePushBtn;
    QPushButton *createPurchaseBackBtn;
    QComboBox *customerTypeComboBox;
    QWidget *addCustomer;
    QPushButton *cancelButton;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *addID;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *addName;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *addButton;
    QComboBox *typeComboBox_2;
    QComboBox *dayComboBox_2;
    QComboBox *monthComboBox_2;
    QComboBox *yearComboBox_2;
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
        stackedWidget->setGeometry(QRect(0, 0, 781, 551));
        adminHomePage = new QWidget();
        adminHomePage->setObjectName(QString::fromUtf8("adminHomePage"));
        label = new QLabel(adminHomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 151, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        addCustomersBttn = new QPushButton(adminHomePage);
        addCustomersBttn->setObjectName(QString::fromUtf8("addCustomersBttn"));
        addCustomersBttn->setGeometry(QRect(40, 100, 131, 23));
        deleteCustomersBttn = new QPushButton(adminHomePage);
        deleteCustomersBttn->setObjectName(QString::fromUtf8("deleteCustomersBttn"));
        deleteCustomersBttn->setGeometry(QRect(40, 160, 131, 23));
        addItemBttn = new QPushButton(adminHomePage);
        addItemBttn->setObjectName(QString::fromUtf8("addItemBttn"));
        addItemBttn->setGeometry(QRect(40, 220, 131, 23));
        deleteItemBttn = new QPushButton(adminHomePage);
        deleteItemBttn->setObjectName(QString::fromUtf8("deleteItemBttn"));
        deleteItemBttn->setGeometry(QRect(40, 280, 131, 23));
        Close = new QPushButton(adminHomePage);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(40, 360, 91, 23));
        createPurchasesBtn = new QPushButton(adminHomePage);
        createPurchasesBtn->setObjectName(QString::fromUtf8("createPurchasesBtn"));
        createPurchasesBtn->setGeometry(QRect(380, 90, 151, 23));
        stackedWidget->addWidget(adminHomePage);
        CreatePurchasesPage = new QWidget();
        CreatePurchasesPage->setObjectName(QString::fromUtf8("CreatePurchasesPage"));
        label_10 = new QLabel(CreatePurchasesPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 10, 221, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        label_11 = new QLabel(CreatePurchasesPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 80, 111, 20));
        label_12 = new QLabel(CreatePurchasesPage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 140, 111, 21));
        addYearLineEdit = new QLineEdit(CreatePurchasesPage);
        addYearLineEdit->setObjectName(QString::fromUtf8("addYearLineEdit"));
        addYearLineEdit->setGeometry(QRect(310, 260, 51, 20));
        addNameLineEdit = new QLineEdit(CreatePurchasesPage);
        addNameLineEdit->setObjectName(QString::fromUtf8("addNameLineEdit"));
        addNameLineEdit->setGeometry(QRect(170, 80, 113, 20));
        label_13 = new QLabel(CreatePurchasesPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 200, 121, 20));
        label_14 = new QLabel(CreatePurchasesPage);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(40, 260, 111, 20));
        label_15 = new QLabel(CreatePurchasesPage);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(180, 240, 21, 16));
        label_16 = new QLabel(CreatePurchasesPage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(310, 240, 47, 13));
        addDayLineEdit = new QLineEdit(CreatePurchasesPage);
        addDayLineEdit->setObjectName(QString::fromUtf8("addDayLineEdit"));
        addDayLineEdit->setGeometry(QRect(230, 260, 41, 20));
        addMonthLineEdit = new QLineEdit(CreatePurchasesPage);
        addMonthLineEdit->setObjectName(QString::fromUtf8("addMonthLineEdit"));
        addMonthLineEdit->setGeometry(QRect(170, 260, 41, 20));
        label_17 = new QLabel(CreatePurchasesPage);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(240, 240, 21, 16));
        addIdLineEdit = new QLineEdit(CreatePurchasesPage);
        addIdLineEdit->setObjectName(QString::fromUtf8("addIdLineEdit"));
        addIdLineEdit->setGeometry(QRect(170, 140, 113, 20));
        label_18 = new QLabel(CreatePurchasesPage);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(430, 80, 81, 20));
        pickItemComboBox = new QComboBox(CreatePurchasesPage);
        pickItemComboBox->setObjectName(QString::fromUtf8("pickItemComboBox"));
        pickItemComboBox->setGeometry(QRect(540, 80, 151, 22));
        label_24 = new QLabel(CreatePurchasesPage);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(430, 160, 81, 20));
        pickQtyLComboBox = new QComboBox(CreatePurchasesPage);
        pickQtyLComboBox->setObjectName(QString::fromUtf8("pickQtyLComboBox"));
        pickQtyLComboBox->setGeometry(QRect(540, 160, 101, 22));
        createPurchasePushBtn = new QPushButton(CreatePurchasesPage);
        createPurchasePushBtn->setObjectName(QString::fromUtf8("createPurchasePushBtn"));
        createPurchasePushBtn->setGeometry(QRect(140, 370, 101, 23));
        createPurchaseBackBtn = new QPushButton(CreatePurchasesPage);
        createPurchaseBackBtn->setObjectName(QString::fromUtf8("createPurchaseBackBtn"));
        createPurchaseBackBtn->setGeometry(QRect(320, 370, 101, 23));
        customerTypeComboBox = new QComboBox(CreatePurchasesPage);
        customerTypeComboBox->setObjectName(QString::fromUtf8("customerTypeComboBox"));
        customerTypeComboBox->setGeometry(QRect(170, 200, 121, 22));
        stackedWidget->addWidget(CreatePurchasesPage);
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
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_4 = new QLabel(addCustomer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 121, 20));
        addID = new QLineEdit(addCustomer);
        addID->setObjectName(QString::fromUtf8("addID"));
        addID->setGeometry(QRect(150, 140, 113, 20));
        label_6 = new QLabel(addCustomer);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 240, 21, 16));
        label_3 = new QLabel(addCustomer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 140, 111, 21));
        addName = new QLineEdit(addCustomer);
        addName->setObjectName(QString::fromUtf8("addName"));
        addName->setGeometry(QRect(150, 80, 113, 20));
        label_5 = new QLabel(addCustomer);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 260, 111, 20));
        label_8 = new QLabel(addCustomer);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 240, 47, 13));
        label_9 = new QLabel(addCustomer);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 80, 111, 20));
        addButton = new QPushButton(addCustomer);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(160, 320, 75, 23));
        typeComboBox_2 = new QComboBox(addCustomer);
        typeComboBox_2->addItem(QString());
        typeComboBox_2->addItem(QString());
        typeComboBox_2->setObjectName(QString::fromUtf8("typeComboBox_2"));
        typeComboBox_2->setGeometry(QRect(150, 200, 121, 22));
        dayComboBox_2 = new QComboBox(addCustomer);
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->addItem(QString());
        dayComboBox_2->setObjectName(QString::fromUtf8("dayComboBox_2"));
        dayComboBox_2->setGeometry(QRect(150, 260, 41, 22));
        monthComboBox_2 = new QComboBox(addCustomer);
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->addItem(QString());
        monthComboBox_2->setObjectName(QString::fromUtf8("monthComboBox_2"));
        monthComboBox_2->setGeometry(QRect(220, 260, 41, 22));
        yearComboBox_2 = new QComboBox(addCustomer);
        yearComboBox_2->addItem(QString());
        yearComboBox_2->addItem(QString());
        yearComboBox_2->addItem(QString());
        yearComboBox_2->setObjectName(QString::fromUtf8("yearComboBox_2"));
        yearComboBox_2->setGeometry(QRect(290, 260, 69, 22));
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
        label_19->setGeometry(QRect(124, 240, 101, 20));
        addItemName = new QLineEdit(addItem);
        addItemName->setObjectName(QString::fromUtf8("addItemName"));
        addItemName->setGeometry(QRect(244, 190, 161, 20));
        label_20 = new QLabel(addItem);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(124, 300, 111, 20));
        cancelButton_3 = new QPushButton(addItem);
        cancelButton_3->setObjectName(QString::fromUtf8("cancelButton_3"));
        cancelButton_3->setGeometry(QRect(364, 380, 75, 23));
        label_21 = new QLabel(addItem);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(124, 190, 91, 20));
        addItemPrice = new QLineEdit(addItem);
        addItemPrice->setObjectName(QString::fromUtf8("addItemPrice"));
        addItemPrice->setGeometry(QRect(244, 240, 81, 20));
        label_22 = new QLabel(addItem);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(140, 150, 461, 20));
        label_23 = new QLabel(addItem);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(244, 90, 121, 41));
        QFont font3;
        font3.setPointSize(15);
        label_23->setFont(font3);
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

        stackedWidget->setCurrentIndex(2);


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
        createPurchasesBtn->setText(QCoreApplication::translate("AdminPage", "Create Purchases", nullptr));
        label_10->setText(QCoreApplication::translate("AdminPage", "CREATE PURCHASES PAGE", nullptr));
        label_11->setText(QCoreApplication::translate("AdminPage", "Name", nullptr));
        label_12->setText(QCoreApplication::translate("AdminPage", "Customer ID", nullptr));
        label_13->setText(QCoreApplication::translate("AdminPage", "Customer Type", nullptr));
        label_14->setText(QCoreApplication::translate("AdminPage", "Expiration Date", nullptr));
        label_15->setText(QCoreApplication::translate("AdminPage", "MM", nullptr));
        label_16->setText(QCoreApplication::translate("AdminPage", "YYYY", nullptr));
        label_17->setText(QCoreApplication::translate("AdminPage", "DD", nullptr));
        label_18->setText(QCoreApplication::translate("AdminPage", "Pick Item: ", nullptr));
        label_24->setText(QCoreApplication::translate("AdminPage", "Quantity:", nullptr));
        createPurchasePushBtn->setText(QCoreApplication::translate("AdminPage", "Create Purchase", nullptr));
        createPurchaseBackBtn->setText(QCoreApplication::translate("AdminPage", "Back", nullptr));
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
        typeComboBox_2->setItemText(0, QCoreApplication::translate("AdminPage", "Regular", nullptr));
        typeComboBox_2->setItemText(1, QCoreApplication::translate("AdminPage", "Executive", nullptr));

        dayComboBox_2->setItemText(0, QCoreApplication::translate("AdminPage", "01", nullptr));
        dayComboBox_2->setItemText(1, QCoreApplication::translate("AdminPage", "02", nullptr));
        dayComboBox_2->setItemText(2, QCoreApplication::translate("AdminPage", "03", nullptr));
        dayComboBox_2->setItemText(3, QCoreApplication::translate("AdminPage", "04", nullptr));
        dayComboBox_2->setItemText(4, QCoreApplication::translate("AdminPage", "05", nullptr));
        dayComboBox_2->setItemText(5, QCoreApplication::translate("AdminPage", "06", nullptr));
        dayComboBox_2->setItemText(6, QCoreApplication::translate("AdminPage", "07", nullptr));
        dayComboBox_2->setItemText(7, QCoreApplication::translate("AdminPage", "08", nullptr));
        dayComboBox_2->setItemText(8, QCoreApplication::translate("AdminPage", "09", nullptr));
        dayComboBox_2->setItemText(9, QCoreApplication::translate("AdminPage", "10", nullptr));
        dayComboBox_2->setItemText(10, QCoreApplication::translate("AdminPage", "11", nullptr));
        dayComboBox_2->setItemText(11, QCoreApplication::translate("AdminPage", "12", nullptr));
        dayComboBox_2->setItemText(12, QCoreApplication::translate("AdminPage", "13", nullptr));
        dayComboBox_2->setItemText(13, QCoreApplication::translate("AdminPage", "14", nullptr));
        dayComboBox_2->setItemText(14, QCoreApplication::translate("AdminPage", "15", nullptr));
        dayComboBox_2->setItemText(15, QCoreApplication::translate("AdminPage", "16", nullptr));
        dayComboBox_2->setItemText(16, QCoreApplication::translate("AdminPage", "17", nullptr));
        dayComboBox_2->setItemText(17, QCoreApplication::translate("AdminPage", "18", nullptr));
        dayComboBox_2->setItemText(18, QCoreApplication::translate("AdminPage", "19", nullptr));
        dayComboBox_2->setItemText(19, QCoreApplication::translate("AdminPage", "20", nullptr));
        dayComboBox_2->setItemText(20, QCoreApplication::translate("AdminPage", "21", nullptr));
        dayComboBox_2->setItemText(21, QCoreApplication::translate("AdminPage", "22", nullptr));
        dayComboBox_2->setItemText(22, QCoreApplication::translate("AdminPage", "23", nullptr));
        dayComboBox_2->setItemText(23, QCoreApplication::translate("AdminPage", "24", nullptr));
        dayComboBox_2->setItemText(24, QCoreApplication::translate("AdminPage", "25", nullptr));
        dayComboBox_2->setItemText(25, QCoreApplication::translate("AdminPage", "26", nullptr));
        dayComboBox_2->setItemText(26, QCoreApplication::translate("AdminPage", "27", nullptr));
        dayComboBox_2->setItemText(27, QCoreApplication::translate("AdminPage", "28", nullptr));
        dayComboBox_2->setItemText(28, QCoreApplication::translate("AdminPage", "29", nullptr));
        dayComboBox_2->setItemText(29, QCoreApplication::translate("AdminPage", "30", nullptr));
        dayComboBox_2->setItemText(30, QCoreApplication::translate("AdminPage", "31", nullptr));

        monthComboBox_2->setItemText(0, QCoreApplication::translate("AdminPage", "01", nullptr));
        monthComboBox_2->setItemText(1, QCoreApplication::translate("AdminPage", "02", nullptr));
        monthComboBox_2->setItemText(2, QCoreApplication::translate("AdminPage", "03", nullptr));
        monthComboBox_2->setItemText(3, QCoreApplication::translate("AdminPage", "04", nullptr));
        monthComboBox_2->setItemText(4, QCoreApplication::translate("AdminPage", "05", nullptr));
        monthComboBox_2->setItemText(5, QCoreApplication::translate("AdminPage", "06", nullptr));
        monthComboBox_2->setItemText(6, QCoreApplication::translate("AdminPage", "07", nullptr));
        monthComboBox_2->setItemText(7, QCoreApplication::translate("AdminPage", "08", nullptr));
        monthComboBox_2->setItemText(8, QCoreApplication::translate("AdminPage", "09", nullptr));
        monthComboBox_2->setItemText(9, QCoreApplication::translate("AdminPage", "10", nullptr));
        monthComboBox_2->setItemText(10, QCoreApplication::translate("AdminPage", "11", nullptr));
        monthComboBox_2->setItemText(11, QCoreApplication::translate("AdminPage", "12", nullptr));

        yearComboBox_2->setItemText(0, QCoreApplication::translate("AdminPage", "2020", nullptr));
        yearComboBox_2->setItemText(1, QCoreApplication::translate("AdminPage", "2021", nullptr));
        yearComboBox_2->setItemText(2, QCoreApplication::translate("AdminPage", "2022", nullptr));

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
