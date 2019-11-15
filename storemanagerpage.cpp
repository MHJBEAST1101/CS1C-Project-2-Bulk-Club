#include "storemanagerpage.h"

StoreManagerPage::StoreManagerPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StoreManagerPage)
{
    ui->setupUi(this);
    setupConnections(); // Calls setupConnections() function to set up connections
    ui->stackedWidget->setCurrentWidget(ui->storeManagerHomePage);  // If a StoreManager class object is called, then the dafault page will be the home page
}

StoreManagerPage::~StoreManagerPage()
{
    delete ui;
}


//------------------------------------------------------------STORY 1 CODE---------------------------------------------------------//
void StoreManagerPage::showTable(QSqlQueryModel *model)
{
    ui->tableView->setModel(model);     // showCustomerList() shows the QSqlQueryModel database model to the tableview
}

/*******************************************************
 * on_dateEnterBtn_clicked() -
 *    This function obtains a date from a widget.
 *    Based on the date, it will calculate the
 *    total revenue for that date. In addition, it will
 *    display all the table information for the given date
 *    onto the table view
 *******************************************************/
void StoreManagerPage::on_dateEnterBtn_clicked()
{
    QString dateEntered;
    QString totalRevenueString;
    QString stringExecutiveCount;
    QString stringRegularCount;
    double revenue;
    int executiveCount = 0;
    int regularCount = 0;

    // INPUT - Obtains input from the dateLineEdit widget
    dateEntered =  ui->dateLineEdit->text();

    // Calls on databaseObj obejct to calculate the total revenue for the specified date
    revenue = databaseObj.GetTotalRevenue(dateEntered);
    totalRevenueString = QString::number(revenue, 'f', 2);  // Converts revenue(double) to string to display onto line edit

    // Shows the table for the date entered, and sets the totalRevenue line edit to be the revue for the given date
    showTable(databaseObj.loadEntriesByDate(dateEntered));
    ui->totalRevenueLineEdit->setText("$"+totalRevenueString);

    // PROCESSING & OUTPUT - Gets the number of executive/regular members. Converts both int variables to string,
    // output them to their corresponding line edits
    executiveCount = databaseObj.ReturnMemberTypeCount(dateEntered, "Executive");
    regularCount = databaseObj.ReturnMemberTypeCount(dateEntered, "Regular");
    stringExecutiveCount = QString::number(executiveCount);
    stringRegularCount = QString::number(regularCount);

    ui->execMembersLineEdit->setText(stringExecutiveCount);
    ui->regMembersLineEdit->setText(stringRegularCount);

}

/*******************************************************
 * on_displayByExecBtn_clicked() -
 *    This function displays the executive members
 *    and their information onto the table.
 *    Depending on the date entered, either all of their
 *    purchases or certain purchases on a given day will
 *    be displayed
 *******************************************************/
void StoreManagerPage::on_displayByExecBtn_clicked()
{
     QString dateEntered;

     // INPUT - Obtains input from the dateLineEdit widget
     dateEntered =  ui->dateLineEdit->text();

     showTable(databaseObj.loadEntriesByType(dateEntered, "Executive"));
}

/*******************************************************
 * on_displayByExecBtn_clicked() -
 *    This function displays the regular members
 *    and their information onto the table.
 *    Depending on the date entered, either all of their
 *    purchases or certain purchases on a given day will
 *    be displayed
 *******************************************************/
void StoreManagerPage::on_displayByRegBtn_clicked()
{
    QString dateEntered;

    // INPUT - Obtains input from the dateLineEdit widget
    dateEntered =  ui->dateLineEdit->text();

    showTable(databaseObj.loadEntriesByType(dateEntered, "Regular"));
}

//------------------------------------------------------------STORY 2 & 3 CODE---------------------------------------------------------//
/*******************************************************
* showTotalPurchasesTable(QSqlQueryModel *model) -
*   This function will set the totalPurchasesTableView
*   to be the model that is passsed in
*******************************************************/
void StoreManagerPage::showTotalPurchasesTable(QSqlQueryModel *model)
{
    ui->totalPurchasesTableView->setModel(model);
}

/*******************************************************
* on_displayByItemBtn_clicked() -
*   This functions calls on showTablePurchasesTable()
*   function in order to load the total purchases regarding
*   item information
*******************************************************/
void StoreManagerPage::on_displayByItemBtn_clicked()
{
    showTotalPurchasesTable(databaseObj.loadTotalMemberOrItemPurchases("Items"));
}

/*******************************************************
* on_displayByAllMembersBtn_clicked() -
*   This functions calls on showTablePurchasesTable()
*   function in order to load the total purchases regarding
*   members' information
*******************************************************/
void StoreManagerPage::on_displayByAllMembersBtn_clicked()
{
    showTotalPurchasesTable(databaseObj.loadTotalMemberOrItemPurchases("Members"));
}



// -----------------------------------CONNECTIONS FUNCTIONS-------------------------------------------------//
// setupConnections() - Sets up connections so that different pages open based on various clicked buttons
void StoreManagerPage::setupConnections()
{
    connect(ui->dailySalesReportsPushBtn, &QPushButton::clicked, this, &StoreManagerPage::ChangeToDailySalesReportsPage);
    connect(ui->dailySalesBackBtn,&QPushButton::clicked, this, &StoreManagerPage::GoToHomePage);
    connect(ui->totalPurchasesPushBtn, &QPushButton::clicked, this, &StoreManagerPage::ChangeToTotalPurchasesPage);
    connect(ui->totalPurchasesBackBtn, &QPushButton::clicked, this, &StoreManagerPage::GoToHomePage);
}

/*******************************************************
 * ChangeToDailySalesReportsPage() -
 *  This function changes the page to daily sales
 *  reports page after user clicks "Go to daily sales
 *  report" button in store manager home page. Will show
 *  the entire daily sales report table
 *******************************************************/
void StoreManagerPage::ChangeToDailySalesReportsPage()
{
    QString totalRevenueString;
    double revenue;
    QString stringExecutiveCount;
    QString stringRegularCount;
    int executiveCount = 0;
    int regularCount = 0;

    // PROCESSING - Obtains total revenue for the entire week.
    // Sets the table to show all the information from the dailySalesReport table from the database
    // Sets the total revenue line edit to be the grand total of all purchases
    revenue = databaseObj.GetTotalRevenue("");
    totalRevenueString = QString::number(revenue, 'f', 2);

    showTable(databaseObj.loadEntries());
    ui->stackedWidget->setCurrentWidget(ui->dailySalesReportsPage);
    ui->dateLineEdit->clear();

    ui->totalRevenueLineEdit->setText("$"+totalRevenueString);

    // PROCESSING & OUTPUT - Gets the number of executive/regular members by calling db manager function
    // Converts both int variables to string,
    // output them to their corresponding line edits
    executiveCount = databaseObj.ReturnMemberTypeCount("", "Executive");
    regularCount = databaseObj.ReturnMemberTypeCount("", "Regular");
    stringExecutiveCount = QString::number(executiveCount);
    stringRegularCount = QString::number(regularCount);

    ui->execMembersLineEdit->setText(stringExecutiveCount);
    ui->regMembersLineEdit->setText(stringRegularCount);

}

void StoreManagerPage::GoToHomePage()
{   // Sets current widget to home page
    ui->stackedWidget->setCurrentWidget(ui->storeManagerHomePage);
}

// Sets current widget to total purchases page
void StoreManagerPage::ChangeToTotalPurchasesPage()
{
    ui->stackedWidget->setCurrentWidget(ui->totalPurchasesPage);

    QString totalRevenueString;
    double revenue;
    revenue = databaseObj.GetTotalRevenue("");
    totalRevenueString = QString::number(revenue, 'f', 2);

    ui->grandTotalLineEdit->setText("$"+totalRevenueString);
}
