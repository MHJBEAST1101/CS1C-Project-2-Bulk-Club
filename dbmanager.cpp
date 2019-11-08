#include "dbmanager.h"

DBManager::DBManager()
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("G:/CS1C Lebowitz/Qt Workspace/Project 2 Bulk Club Updated/CS1CProject2BulkClub/CS1CProject2.db⁩");
    if(!m_database.open())
    {
        qDebug() << "problem opening database" << endl;
    }
}

DBManager::~DBManager(){}

/*******************************************************
* loadEntries() -
*  This function helps the program read the contents.
*  from the database. This function primarily uses
*  the query function, "select * from". The database
*  in which it is selected from is called customer.
*  Throughout the process, the data returned is
*  is stored in the table created in createTable().
*  If the database or data has trouble storing the
*  values, it will output "error loading values to
*  db". Returns pointer
*******************************************************/
QSqlQueryModel *DBManager::loadEntries()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select name, purchaseDate, dailySalesReport.ID, item, price, quantity "
                "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

/*******************************************************
* loadEntriesByDate(QString date) -
*   STORY #1
*   This function will return a query model based
*   on a certain date. Will return the table that
*   displays a sales report for any given day.
*******************************************************/
QSqlQueryModel *DBManager::loadEntriesByDate(QString date)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select name, purchaseDate, dailySalesReport.ID, item, price, quantity "
                "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                " and purchaseDate = \""+date+"\";");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

double DBManager::GetTotalRevenue(QString date)
{
    double totalRevenue = 0;
    QSqlQuery qry;
    if(date == "")
    {
        totalRevenue = qry.prepare("select ((sum(price) * sum(quantity)) + (sum(price) * sum(quantity))*.0775) as \"Total revenue\" from dailySalesReport;");
    }
    return totalRevenue;
}
