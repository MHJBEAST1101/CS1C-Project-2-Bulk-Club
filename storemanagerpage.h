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

    //----------------------------STORY 1 CODE-----------------------------------------//
     void showTable(QSqlQueryModel *model);

     /*******************************************************
      * ShowDatesInComboBox(QSqlQueryModel *model) -
      *     This function sets the dates combo box widget
      *     to be whatever the return model of type
      *     QSqlQueryModel is
      *******************************************************/
     void ShowDatesInComboBox(QSqlQueryModel *model);

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

     void ChangeToTotalPurchasesPage();


private slots:
     /*******************************************************
      * on_dateEnterBtn_clicked() -
      *    This function obtains a date from a widget.
      *    Based on the date, it will calculate the
      *    total revenue for that date. In addition, it will
      *    display all the table information for the given date
      *    onto the table view
      *******************************************************/
     void on_dateEnterBtn_clicked();

     /*******************************************************
      * on_displayByExecBtn_clicked() -
      *    This function displays the executive members
      *    and their information onto the table.
      *    Depending on the date entered, either all of their
      *    purchases or certain purchases on a given day will
      *    be displayed
      *******************************************************/
     void on_displayByExecBtn_clicked();

     /*******************************************************
      * on_displayByExecBtn_clicked() -
      *    This function displays the regular members
      *    and their information onto the table.
      *    Depending on the date entered, either all of their
      *    purchases or certain purchases on a given day will
      *    be displayed
      *******************************************************/
     void on_displayByRegBtn_clicked();

     // -------------STORY 2 & 3 FUNCTIONS-----------------//
     /*******************************************************
     * showTotalPurchasesTable(QSqlQueryModel *model) -
     *   This function will set the totalPurchasesTableView
     *   to be the model that is passsed in
     *******************************************************/
     void showTotalPurchasesTable(QSqlQueryModel *model);

     /*******************************************************
     * on_displayByItemBtn_clicked() -
     *   This functions calls on showTablePurchasesTable()
     *   function in order to load the total purchases regarding
     *   item information
     *******************************************************/
     void on_displayByItemBtn_clicked();

     /*******************************************************
     * on_displayByAllMembersBtn_clicked() -
     *   This functions calls on showTablePurchasesTable()
     *   function in order to load the total purchases regarding
     *   members' information
     *******************************************************/
     void on_displayByAllMembersBtn_clicked();


     /*******************************************************
     * on_displayAllInfoBtn_clicked()-
     *   After a store manager clicks on the
     *   displayAllInfoBtn widget, then the table in
     *   dailySalesReportPage will contain ALL the information
     *   throughout the week. Moreover, the total revenue
     *   generated as well as the # of executive/regular members
     *   will be shown
     *******************************************************/
     void on_displayAllInfoBtn_clicked();

     void on_displayByExpirBtn_clicked();
//-----------------------STORY 5 CODE---------------------------------------------------------//
     void ShowExpirMonthsInComboBox(QSqlQueryModel *model);

     void on_monthExpirComboBox_clicked();


private:
    Ui::StoreManagerPage *ui;
    DBManager databaseObj;      // object used for DBManager class
};

#endif // STOREMANAGERPAGE_H
