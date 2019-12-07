/********************************************************************************
** Form generated from reading UI file 'storemanagerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREMANAGERPAGE_H
#define UI_STOREMANAGERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StoreManagerPage
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *storeManagerHomePage;
    QLabel *label;
    QPushButton *dailySalesReportsPushBtn;
    QPushButton *totalPurchasesPushBtn;
    QPushButton *rebatePushBtn;
    QWidget *rebateAndExpPage;
    QLabel *label_11;
    QPushButton *rebateBackBtn;
    QTableView *rebateAndExpTableView;
    QPushButton *displayRebatePushBtn;
    QLabel *label_12;
    QComboBox *expMonthComboBox;
    QPushButton *expMonthEnterBtn;
    QWidget *dailySalesReportsPage;
    QLabel *label_2;
    QTableView *tableView;
    QPushButton *dailySalesBackBtn;
    QLabel *label_3;
    QPushButton *dateEnterBtn;
    QLabel *label_4;
    QLineEdit *totalRevenueLineEdit;
    QPushButton *displayByExecBtn;
    QPushButton *displayByRegBtn;
    QLabel *label_5;
    QLineEdit *execMembersLineEdit;
    QLabel *label_6;
    QLineEdit *regMembersLineEdit;
    QComboBox *dateComboBox;
    QPushButton *displayAllInfoBtn;
    QWidget *totalPurchasesPage;
    QLabel *label_7;
    QPushButton *totalPurchasesBackBtn;
    QTableView *totalPurchasesTableView;
    QLabel *label_8;
    QLineEdit *grandTotalLineEdit;
    QPushButton *displayByItemBtn;
    QPushButton *displayByAllMembersBtn;
    QPushButton *enterItemPushBtn;
    QPushButton *enterNamePushBtn;
    QComboBox *itemComboBox;
    QComboBox *nameComoboBox;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StoreManagerPage)
    {
        if (StoreManagerPage->objectName().isEmpty())
            StoreManagerPage->setObjectName(QString::fromUtf8("StoreManagerPage"));
        StoreManagerPage->resize(903, 600);
        centralwidget = new QWidget(StoreManagerPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 911, 591));
        QFont font;
        font.setPointSize(9);
        stackedWidget->setFont(font);
        storeManagerHomePage = new QWidget();
        storeManagerHomePage->setObjectName(QString::fromUtf8("storeManagerHomePage"));
        label = new QLabel(storeManagerHomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 281, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        dailySalesReportsPushBtn = new QPushButton(storeManagerHomePage);
        dailySalesReportsPushBtn->setObjectName(QString::fromUtf8("dailySalesReportsPushBtn"));
        dailySalesReportsPushBtn->setGeometry(QRect(230, 110, 231, 23));
        QFont font2;
        font2.setPointSize(10);
        dailySalesReportsPushBtn->setFont(font2);
        totalPurchasesPushBtn = new QPushButton(storeManagerHomePage);
        totalPurchasesPushBtn->setObjectName(QString::fromUtf8("totalPurchasesPushBtn"));
        totalPurchasesPushBtn->setGeometry(QRect(230, 150, 231, 23));
        totalPurchasesPushBtn->setFont(font2);
        rebatePushBtn = new QPushButton(storeManagerHomePage);
        rebatePushBtn->setObjectName(QString::fromUtf8("rebatePushBtn"));
        rebatePushBtn->setGeometry(QRect(230, 200, 231, 23));
        rebatePushBtn->setFont(font);
        stackedWidget->addWidget(storeManagerHomePage);
        rebateAndExpPage = new QWidget();
        rebateAndExpPage->setObjectName(QString::fromUtf8("rebateAndExpPage"));
        label_11 = new QLabel(rebateAndExpPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 20, 281, 16));
        label_11->setFont(font1);
        rebateBackBtn = new QPushButton(rebateAndExpPage);
        rebateBackBtn->setObjectName(QString::fromUtf8("rebateBackBtn"));
        rebateBackBtn->setGeometry(QRect(20, 520, 75, 23));
        rebateAndExpTableView = new QTableView(rebateAndExpPage);
        rebateAndExpTableView->setObjectName(QString::fromUtf8("rebateAndExpTableView"));
        rebateAndExpTableView->setGeometry(QRect(190, 70, 661, 331));
        displayRebatePushBtn = new QPushButton(rebateAndExpPage);
        displayRebatePushBtn->setObjectName(QString::fromUtf8("displayRebatePushBtn"));
        displayRebatePushBtn->setGeometry(QRect(20, 90, 111, 23));
        label_12 = new QLabel(rebateAndExpPage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(16, 170, 131, 20));
        expMonthComboBox = new QComboBox(rebateAndExpPage);
        expMonthComboBox->setObjectName(QString::fromUtf8("expMonthComboBox"));
        expMonthComboBox->setGeometry(QRect(20, 200, 131, 22));
        expMonthEnterBtn = new QPushButton(rebateAndExpPage);
        expMonthEnterBtn->setObjectName(QString::fromUtf8("expMonthEnterBtn"));
        expMonthEnterBtn->setGeometry(QRect(40, 240, 75, 23));
        stackedWidget->addWidget(rebateAndExpPage);
        dailySalesReportsPage = new QWidget();
        dailySalesReportsPage->setObjectName(QString::fromUtf8("dailySalesReportsPage"));
        label_2 = new QLabel(dailySalesReportsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 261, 21));
        label_2->setFont(font1);
        tableView = new QTableView(dailySalesReportsPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(160, 50, 711, 391));
        dailySalesBackBtn = new QPushButton(dailySalesReportsPage);
        dailySalesBackBtn->setObjectName(QString::fromUtf8("dailySalesBackBtn"));
        dailySalesBackBtn->setGeometry(QRect(30, 530, 75, 23));
        label_3 = new QLabel(dailySalesReportsPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 101, 20));
        dateEnterBtn = new QPushButton(dailySalesReportsPage);
        dateEnterBtn->setObjectName(QString::fromUtf8("dateEnterBtn"));
        dateEnterBtn->setGeometry(QRect(30, 130, 61, 23));
        label_4 = new QLabel(dailySalesReportsPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(181, 461, 161, 20));
        totalRevenueLineEdit = new QLineEdit(dailySalesReportsPage);
        totalRevenueLineEdit->setObjectName(QString::fromUtf8("totalRevenueLineEdit"));
        totalRevenueLineEdit->setGeometry(QRect(380, 460, 133, 20));
        displayByExecBtn = new QPushButton(dailySalesReportsPage);
        displayByExecBtn->setObjectName(QString::fromUtf8("displayByExecBtn"));
        displayByExecBtn->setGeometry(QRect(20, 190, 121, 23));
        displayByRegBtn = new QPushButton(dailySalesReportsPage);
        displayByRegBtn->setObjectName(QString::fromUtf8("displayByRegBtn"));
        displayByRegBtn->setGeometry(QRect(20, 240, 121, 23));
        label_5 = new QLabel(dailySalesReportsPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(183, 491, 191, 20));
        execMembersLineEdit = new QLineEdit(dailySalesReportsPage);
        execMembersLineEdit->setObjectName(QString::fromUtf8("execMembersLineEdit"));
        execMembersLineEdit->setGeometry(QRect(380, 491, 133, 20));
        label_6 = new QLabel(dailySalesReportsPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 520, 201, 20));
        regMembersLineEdit = new QLineEdit(dailySalesReportsPage);
        regMembersLineEdit->setObjectName(QString::fromUtf8("regMembersLineEdit"));
        regMembersLineEdit->setGeometry(QRect(380, 520, 133, 20));
        dateComboBox = new QComboBox(dailySalesReportsPage);
        dateComboBox->setObjectName(QString::fromUtf8("dateComboBox"));
        dateComboBox->setGeometry(QRect(20, 90, 91, 22));
        displayAllInfoBtn = new QPushButton(dailySalesReportsPage);
        displayAllInfoBtn->setObjectName(QString::fromUtf8("displayAllInfoBtn"));
        displayAllInfoBtn->setGeometry(QRect(20, 360, 121, 23));
        stackedWidget->addWidget(dailySalesReportsPage);
        totalPurchasesPage = new QWidget();
        totalPurchasesPage->setObjectName(QString::fromUtf8("totalPurchasesPage"));
        label_7 = new QLabel(totalPurchasesPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 191, 41));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        totalPurchasesBackBtn = new QPushButton(totalPurchasesPage);
        totalPurchasesBackBtn->setObjectName(QString::fromUtf8("totalPurchasesBackBtn"));
        totalPurchasesBackBtn->setGeometry(QRect(40, 520, 75, 23));
        totalPurchasesTableView = new QTableView(totalPurchasesPage);
        totalPurchasesTableView->setObjectName(QString::fromUtf8("totalPurchasesTableView"));
        totalPurchasesTableView->setGeometry(QRect(140, 50, 531, 421));
        label_8 = new QLabel(totalPurchasesPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(200, 500, 121, 20));
        grandTotalLineEdit = new QLineEdit(totalPurchasesPage);
        grandTotalLineEdit->setObjectName(QString::fromUtf8("grandTotalLineEdit"));
        grandTotalLineEdit->setGeometry(QRect(330, 500, 113, 20));
        displayByItemBtn = new QPushButton(totalPurchasesPage);
        displayByItemBtn->setObjectName(QString::fromUtf8("displayByItemBtn"));
        displayByItemBtn->setGeometry(QRect(10, 110, 121, 23));
        displayByAllMembersBtn = new QPushButton(totalPurchasesPage);
        displayByAllMembersBtn->setObjectName(QString::fromUtf8("displayByAllMembersBtn"));
        displayByAllMembersBtn->setGeometry(QRect(10, 160, 121, 23));
        enterItemPushBtn = new QPushButton(totalPurchasesPage);
        enterItemPushBtn->setObjectName(QString::fromUtf8("enterItemPushBtn"));
        enterItemPushBtn->setGeometry(QRect(760, 120, 75, 23));
        enterNamePushBtn = new QPushButton(totalPurchasesPage);
        enterNamePushBtn->setObjectName(QString::fromUtf8("enterNamePushBtn"));
        enterNamePushBtn->setGeometry(QRect(760, 340, 75, 23));
        itemComboBox = new QComboBox(totalPurchasesPage);
        itemComboBox->setObjectName(QString::fromUtf8("itemComboBox"));
        itemComboBox->setGeometry(QRect(720, 70, 151, 22));
        nameComoboBox = new QComboBox(totalPurchasesPage);
        nameComoboBox->setObjectName(QString::fromUtf8("nameComoboBox"));
        nameComoboBox->setGeometry(QRect(720, 300, 151, 22));
        label_9 = new QLabel(totalPurchasesPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(740, 40, 91, 16));
        label_10 = new QLabel(totalPurchasesPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(730, 270, 111, 20));
        stackedWidget->addWidget(totalPurchasesPage);
        StoreManagerPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StoreManagerPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 903, 21));
        StoreManagerPage->setMenuBar(menubar);
        statusbar = new QStatusBar(StoreManagerPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StoreManagerPage->setStatusBar(statusbar);

        retranslateUi(StoreManagerPage);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(StoreManagerPage);
    } // setupUi

    void retranslateUi(QMainWindow *StoreManagerPage)
    {
        StoreManagerPage->setWindowTitle(QCoreApplication::translate("StoreManagerPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("StoreManagerPage", "STORE MANAGER PAGE", nullptr));
        dailySalesReportsPushBtn->setText(QCoreApplication::translate("StoreManagerPage", "Go to Daily Sales Reports", nullptr));
        totalPurchasesPushBtn->setText(QCoreApplication::translate("StoreManagerPage", "Go to Total Purchases", nullptr));
        rebatePushBtn->setText(QCoreApplication::translate("StoreManagerPage", "Go to Rebate and Expiration Page", nullptr));
        label_11->setText(QCoreApplication::translate("StoreManagerPage", "REBATE AND EXPIRATION PAGE", nullptr));
        rebateBackBtn->setText(QCoreApplication::translate("StoreManagerPage", "Back", nullptr));
        displayRebatePushBtn->setText(QCoreApplication::translate("StoreManagerPage", "Display Rebate", nullptr));
        label_12->setText(QCoreApplication::translate("StoreManagerPage", "Enter Expiration Month:", nullptr));
        expMonthEnterBtn->setText(QCoreApplication::translate("StoreManagerPage", "Enter", nullptr));
        label_2->setText(QCoreApplication::translate("StoreManagerPage", "DAILY SALES REPORTS PAGE", nullptr));
        dailySalesBackBtn->setText(QCoreApplication::translate("StoreManagerPage", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("StoreManagerPage", "Enter a date:", nullptr));
        dateEnterBtn->setText(QCoreApplication::translate("StoreManagerPage", "Enter", nullptr));
        label_4->setText(QCoreApplication::translate("StoreManagerPage", "Total Revenue (7.75%): ", nullptr));
        displayByExecBtn->setText(QCoreApplication::translate("StoreManagerPage", "Display by Executive", nullptr));
        displayByRegBtn->setText(QCoreApplication::translate("StoreManagerPage", "Display by Regular", nullptr));
        label_5->setText(QCoreApplication::translate("StoreManagerPage", "Number of Executive Members: ", nullptr));
        label_6->setText(QCoreApplication::translate("StoreManagerPage", "Number of Regular Members: ", nullptr));
        displayAllInfoBtn->setText(QCoreApplication::translate("StoreManagerPage", "DISPLAY ALL", nullptr));
        label_7->setText(QCoreApplication::translate("StoreManagerPage", "TOTAL PURCHASES PAGE", nullptr));
        totalPurchasesBackBtn->setText(QCoreApplication::translate("StoreManagerPage", "Back", nullptr));
        label_8->setText(QCoreApplication::translate("StoreManagerPage", "Grand Total (7.75%)", nullptr));
        displayByItemBtn->setText(QCoreApplication::translate("StoreManagerPage", "Display by Item", nullptr));
        displayByAllMembersBtn->setText(QCoreApplication::translate("StoreManagerPage", "Display by all Members", nullptr));
        enterItemPushBtn->setText(QCoreApplication::translate("StoreManagerPage", "Enter Item", nullptr));
        enterNamePushBtn->setText(QCoreApplication::translate("StoreManagerPage", "Enter name", nullptr));
        label_9->setText(QCoreApplication::translate("StoreManagerPage", "Enter Item name:", nullptr));
        label_10->setText(QCoreApplication::translate("StoreManagerPage", "Enter Member name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StoreManagerPage: public Ui_StoreManagerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREMANAGERPAGE_H
