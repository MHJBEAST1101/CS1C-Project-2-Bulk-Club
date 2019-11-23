#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QMainWindow>
#include "ui_adminpage.h"
#include "dbmanager.h"
#include <QtSql>
#include <QSqlQuery>

namespace Ui {
class AdminPage;
}

class AdminPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr);
    ~AdminPage();

     void setupConnections();

     void ChangeToaddCustomers();

     void ChangeToaddItem();

private slots:

     void on_deleteCustomersBttn_clicked();

     void on_cancelButton_clicked();

     void on_cancelButton_3_clicked();

     void on_addItemConfirm_clicked();

     void on_addButton_clicked();

     void on_deleteItemBttn_clicked();

     void on_addCustomersBttn_clicked();

     void on_addItemBttn_clicked();

     void on_Close_clicked();

private:
    Ui::AdminPage *ui;
    DBManager databaseObj;
    QSqlQuery data;
};

#endif // ADMINPAGE_H
