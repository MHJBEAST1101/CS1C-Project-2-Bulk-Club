#include "dbmanager.h"

DBManager::DBManager()
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("D:/CS1C Lebowitz/Qt Workspace/Project 2 Bulk Club Updated/CS1CProject2BulkClub/CS1CProject2.db⁩");
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
    qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
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

    if(date == "")
    {
        qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                    "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID;");
    }
    else
    {
        qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                    "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                    " and purchaseDate = \""+date+"\";");
    }

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

/*******************************************************
* GetTotalRevenue(QString date) -
*   STORY #1/3
*   Depending on the date input, this function will
*   obtain the total revenue from a given date from
*   the database. If date is empty, then the total
*   revenue will be the grand total of all the purchases
*   from all customers. RETURNS total revenue
*******************************************************/
double DBManager::GetTotalRevenue(QString date)
{
    double totalRevenue = 0;
    QSqlQuery qry;

    // PROCESSING - Depending on the date, the qry variable executes the specified query statement. Then totalRevenue obtains
    // the value of the total revenue from the date
    if(date == "")
    {
        qry.prepare("select printf(\"%.2f\",((sum(price) * sum(quantity)) + (sum(price) * sum(quantity))*.0775)) as \"Total revenue\" from dailySalesReport;");
        qry.exec();
        if(qry.next())
        {
            totalRevenue = qry.value(0).toDouble(); // Storing the value from the table into totalRevenue variable
        }
    }
    else
    {
        qry.prepare("select printf(\"%.2f\",((sum(price) * sum(quantity)) + (sum(price) * sum(quantity))*.0775)) "
                    "as \"Total revenue\" from dailySalesReport where purchaseDate = \""+date+"\";");
        qry.exec();
        if(qry.next())
        {
            totalRevenue = qry.value(0).toDouble();
        }
    }
    return totalRevenue;
}

/*******************************************************
* loadEntriesByType(QString date, QString memberType)=
*   This function loads all the entries from the database
*   by membership type. date and memberType are passed
*   in to determine whether all the entries of either the
*   executive or regular customers will be displayed
*   (entire week) or all the entries of either the
*   executive or regular customers from a certain day.
*   Returns model
*******************************************************/
QSqlQueryModel *DBManager::loadEntriesByType(QString date, QString memberType)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;

    // PROCESSING - If date is empty, then the query will select all the entries of either the
    // executive or regular customers
    if(date == "")
    {
        if(memberType == "Executive")
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Executive\";");
        }
        else
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Regular\";");
        }
    }
    // PROCESSING - Otherwise, the query will select all the entries from a given date of either the
    // executive or regular customers
    else
    {
        if(memberType == "Executive")
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Executive\" and purchaseDate = \""+date+"\";");
        }
        else
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Regular\" and purchaseDate = \""+date+"\";");
        }
    }

    // PROCESSING - Checks to see if query doesn't execute, then will set the model to be the query and return it
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;

}

/*******************************************************
*ReturnMemberTypeCount(QString date, QString memberType)-
*   Depending on the date and memberType, this function
*   will count either the executive or regular members
*   from the database. If date is empty, it will count
*   both members throughout the entire week. Otherwise,
*   it will count the number of members based on a certain
*   day
*   RETURNS memberCount (int)
*******************************************************/
int DBManager::ReturnMemberTypeCount(QString date, QString memberType)
{
    int memberCount = 0;
    QSqlQuery qry;
    if(date == "")
    {
        if(memberType == "Executive")
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                        "where Customers.ID = dailySalesReport.ID and type = \"Executive\";");
        }
        else
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                        "where Customers.ID = dailySalesReport.ID and type = \"Regular\";");
        }
    }
    else
    {
        if(memberType == "Executive")
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                         "where Customers.ID = dailySalesReport.ID and "
                         "type = \"Executive\" and purchaseDate = \""+date+"\";");

        }
        else
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                         "where Customers.ID = dailySalesReport.ID and "
                         "type = \"Regular\" and purchaseDate = \""+date+"\";");
        }
    }

    qry.exec();
    if(qry.next())
    {
        memberCount = qry.value(0).toInt();
    }

    return memberCount;

}

//------------------------------------------STORY 2 & 3 CODE-------------------------------------//
/*******************************************************
*loadTotalMemberOrItemPurchases(QString decider)-
*   Depending on the given decider string, this function
*   will load the total purchases from all members or
*   total purchases of all items
*   RETURNS model (QSqlQueryModel)
*******************************************************/
QSqlQueryModel *DBManager::loadTotalMemberOrItemPurchases(QString decider)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;

    if(decider == "Members" || decider == "members")
    {
        qry.prepare("SELECT name, type, Customers.ID, \"$\" || printf(\"%.2f\",((sum(price) * sum(quantity)) + (sum(price) * sum(quantity))*.0775))"
                    " as \"Total revenue (7.75%)\" from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID "
                    "group by Customers.ID order by Customers.ID;");
    }
    else
    {
        qry.prepare("SELECT item, sum(quantity) as \"quantity sold\", \"$\" || printf(\"%.2f\",((sum(price) * sum(quantity)) + (sum(price) * sum(quantity))*.0775)) "
                    "as \"Total revenue\" from dailySalesReport group by item order by item;");

    }
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}
