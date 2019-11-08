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

void StoreManagerPage::showTable(QSqlQueryModel *model)
{
    ui->tableView->setModel(model);     // showCustomerList() shows the QSqlQueryModel database model to the tableview
}

void StoreManagerPage::on_dateEnterBtn_clicked()
{
    QString dateEntered = ui->dateLineEdit->text();
    showTable(databaseObj.loadEntriesByDate(dateEntered));
}




// setupConnections() - Sets up connections so that different pages open based on various clicked buttons
void StoreManagerPage::setupConnections()
{
    connect(ui->dailySalesReportsPushBtn, &QPushButton::clicked, this, &StoreManagerPage::ChangeToDailySalesReportsPage);
    connect(ui->dailySalesBackBtn,&QPushButton::clicked, this, &StoreManagerPage::GoToHomePage);
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
    showTable(databaseObj.loadEntries());
    ui->stackedWidget->setCurrentWidget(ui->dailySalesReportsPage);
    ui->dateLineEdit->clear();

    double total = databaseObj.GetTotalRevenue("");
    QString totalString = QString::number(total, 'g', 10);
    ui->totalRevenueLineEdit->setText(totalString);
}

void StoreManagerPage::GoToHomePage()
{
    ui->stackedWidget->setCurrentWidget(ui->storeManagerHomePage);
}

