#ifndef STOREMANAGERPAGE_H
#define STOREMANAGERPAGE_H

#include <QMainWindow>
#include "ui_storemanagerpage.h"
#include "dbmanager.h"
#include <QtSql>

namespace Ui {
class StoreManagerPage;
}

class StoreManagerPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit StoreManagerPage(QWidget *parent = nullptr);   // Default constructor
    ~StoreManagerPage();    // Destructor

     void showTable(QSqlQueryModel *model);

     // setupConnections() - Sets up connections so that different pages open based on various clicked buttons
     void setupConnections();

     /*******************************************************
      * ChangeToDailySalesReportsPage() -
      *  This function changes the page to daily sales
      *  reports page after user clicks "Go to daily sales
      *  report" button in store manager home page. Will show
      *  the entire daily sales report table
      *******************************************************/
     void ChangeToDailySalesReportsPage();

     void GoToHomePage();


//private slots:
//     void on_day1PushBtn_clicked();

//     void on_day2PushBtn_clicked();

//     void on_day3PushBtn_clicked();

private slots:
     void on_dateEnterBtn_clicked();

private:
    Ui::StoreManagerPage *ui;
    DBManager databaseObj;      // object used for DBManager class
};

#endif // STOREMANAGERPAGE_H
