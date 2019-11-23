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
        storeManagerHomePage = new QWidget();
        storeManagerHomePage->setObjectName(QString::fromUtf8("storeManagerHomePage"));
        label = new QLabel(storeManagerHomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 201, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        dailySalesReportsPushBtn = new QPushButton(storeManagerHomePage);
        dailySalesReportsPushBtn->setObjectName(QString::fromUtf8("dailySalesReportsPushBtn"));
        dailySalesReportsPushBtn->setGeometry(QRect(280, 110, 181, 23));
        QFont font1;
        font1.setPointSize(10);
        dailySalesReportsPushBtn->setFont(font1);
        totalPurchasesPushBtn = new QPushButton(storeManagerHomePage);
        totalPurchasesPushBtn->setObjectName(QString::fromUtf8("totalPurchasesPushBtn"));
        totalPurchasesPushBtn->setGeometry(QRect(280, 150, 181, 23));
        totalPurchasesPushBtn->setFont(font1);
        stackedWidget->addWidget(storeManagerHomePage);
        dailySalesReportsPage = new QWidget();
        dailySalesReportsPage->setObjectName(QString::fromUtf8("dailySalesReportsPage"));
        label_2 = new QLabel(dailySalesReportsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 261, 21));
        label_2->setFont(font);
        tableView = new QTableView(dailySalesReportsPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(160, 50, 711, 391));
        dailySalesBackBtn = new QPushButton(dailySalesReportsPage);
        dailySalesBackBtn->setObjectName(QString::fromUtf8("dailySalesBackBtn"));
        dailySalesBackBtn->setGeometry(QRect(10, 530, 75, 23));
        label_3 = new QLabel(dailySalesReportsPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 61, 20));
        dateEnterBtn = new QPushButton(dailySalesReportsPage);
        dateEnterBtn->setObjectName(QString::fromUtf8("dateEnterBtn"));
        dateEnterBtn->setGeometry(QRect(30, 130, 61, 23));
        label_4 = new QLabel(dailySalesReportsPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(221, 461, 121, 16));
        totalRevenueLineEdit = new QLineEdit(dailySalesReportsPage);
        totalRevenueLineEdit->setObjectName(QString::fromUtf8("totalRevenueLineEdit"));
        totalRevenueLineEdit->setGeometry(QRect(380, 460, 133, 20));
        displayByExecBtn = new QPushButton(dailySalesReportsPage);
        displayByExecBtn->setObjectName(QString::fromUtf8("displayByExecBtn"));
        displayByExecBtn->setGeometry(QRect(10, 200, 111, 23));
        displayByRegBtn = new QPushButton(dailySalesReportsPage);
        displayByRegBtn->setObjectName(QString::fromUtf8("displayByRegBtn"));
        displayByRegBtn->setGeometry(QRect(10, 240, 111, 23));
        label_5 = new QLabel(dailySalesReportsPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(221, 491, 153, 16));
        execMembersLineEdit = new QLineEdit(dailySalesReportsPage);
        execMembersLineEdit->setObjectName(QString::fromUtf8("execMembersLineEdit"));
        execMembersLineEdit->setGeometry(QRect(380, 491, 133, 20));
        label_6 = new QLabel(dailySalesReportsPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 520, 161, 20));
        regMembersLineEdit = new QLineEdit(dailySalesReportsPage);
        regMembersLineEdit->setObjectName(QString::fromUtf8("regMembersLineEdit"));
        regMembersLineEdit->setGeometry(QRect(380, 520, 133, 20));
        dateComboBox = new QComboBox(dailySalesReportsPage);
        dateComboBox->setObjectName(QString::fromUtf8("dateComboBox"));
        dateComboBox->setGeometry(QRect(30, 90, 81, 22));
        displayAllInfoBtn = new QPushButton(dailySalesReportsPage);
        displayAllInfoBtn->setObjectName(QString::fromUtf8("displayAllInfoBtn"));
        displayAllInfoBtn->setGeometry(QRect(10, 360, 111, 23));
        stackedWidget->addWidget(dailySalesReportsPage);
        totalPurchasesPage = new QWidget();
        totalPurchasesPage->setObjectName(QString::fromUtf8("totalPurchasesPage"));
        label_7 = new QLabel(totalPurchasesPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 191, 41));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);
        totalPurchasesBackBtn = new QPushButton(totalPurchasesPage);
        totalPurchasesBackBtn->setObjectName(QString::fromUtf8("totalPurchasesBackBtn"));
        totalPurchasesBackBtn->setGeometry(QRect(40, 520, 75, 23));
        totalPurchasesTableView = new QTableView(totalPurchasesPage);
        totalPurchasesTableView->setObjectName(QString::fromUtf8("totalPurchasesTableView"));
        totalPurchasesTableView->setGeometry(QRect(140, 50, 531, 421));
        label_8 = new QLabel(totalPurchasesPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(210, 500, 111, 20));
        grandTotalLineEdit = new QLineEdit(totalPurchasesPage);
        grandTotalLineEdit->setObjectName(QString::fromUtf8("grandTotalLineEdit"));
        grandTotalLineEdit->setGeometry(QRect(330, 500, 113, 20));
        displayByItemBtn = new QPushButton(totalPurchasesPage);
        displayByItemBtn->setObjectName(QString::fromUtf8("displayByItemBtn"));
        displayByItemBtn->setGeometry(QRect(10, 110, 121, 23));
        displayByAllMembersBtn = new QPushButton(totalPurchasesPage);
        displayByAllMembersBtn->setObjectName(QString::fromUtf8("displayByAllMembersBtn"));
        displayByAllMembersBtn->setGeometry(QRect(10, 160, 121, 23));
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
        label_8->setText(QCoreApplication::translate("StoreManagerPage", "Grand Tota (7.75%)", nullptr));
        displayByItemBtn->setText(QCoreApplication::translate("StoreManagerPage", "Display by Item", nullptr));
        displayByAllMembersBtn->setText(QCoreApplication::translate("StoreManagerPage", "Display by all Members", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StoreManagerPage: public Ui_StoreManagerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREMANAGERPAGE_H
