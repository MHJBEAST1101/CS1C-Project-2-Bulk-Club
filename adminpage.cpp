#include "adminpage.h"
#include <QMessageBox>
#include <QInputDialog>
AdminPage::AdminPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);
    // Sets default page to be the home page
    ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
}

AdminPage::~AdminPage()
{
    delete ui;
}

void AdminPage::setupConnections()
{
    connect(ui->addCustomersBttn, &QPushButton::clicked, this, &AdminPage::ChangeToaddCustomers);
    connect(ui->addItemBttn,&QPushButton::clicked, this, &AdminPage::ChangeToaddItem);

}

void AdminPage::ChangeToaddCustomers()
{
    ui->stackedWidget->setCurrentWidget(ui->addCustomer);
}

void AdminPage::ChangeToaddItem()
{
     ui->stackedWidget->setCurrentWidget(ui->addItem);
}


void AdminPage::on_deleteCustomersBttn_clicked()
{
    QString deleteCustomer = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                                   tr("Customer name:"), QLineEdit::Normal,
                                                   QDir::home().dirName());

    data.prepare("DELETE FROM Customers WHERE name == '"+deleteCustomer+"'");
    data.exec();

    QMessageBox::about(this, "", "The customer was deleted. double check if error occured");
}

void AdminPage::on_addButton_clicked()
{
    QString name = ui->addName ->text();
    QString ID = ui->addID->text();
    QString customerType = ui->addType->text();
    QString expDay = ui->addDay->text();
    QString expMonth = ui->addMonth->text();
    QString expYear = ui->addYear->text();

    data.prepare("INSERT INTO Customers (name, ID, type, expMonth, expDay, expYear) VALUES('"+name+"', '"+ID+"', '"+customerType+"', '"+expMonth+"', '"+expDay+"', '"+expYear+"')");
    data.exec();

    if(data.exec())
    {
        QMessageBox::about(this, "", "The Customer was added. be sure to double check if added correctly");

    }

    else
    {
        QMessageBox::about(this, "Error", "Database not found. double check connection");
    }
    ui->stackedWidget->setCurrentWidget(ui->adminHomePage);

}

void AdminPage::on_cancelButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
}


void AdminPage::on_addItemConfirm_clicked()
{
    QString itemName = ui->addItemName->text();
    QString itemPrice = ui->addItemPrice->text();
    QString itemQuantity = ui->addItemQty->text();

    data.prepare("INSERT INTO inventory (item, price, quantity) VALUES ('"+itemName+"', '"+itemPrice+"', '"+itemQuantity+"'");
    data.exec();

    if(data.exec())
    {
        QMessageBox::about(this, "", "The item was added. double check if error occured");
    }
    else
    {
        QMessageBox::about(this, "Error", "Database not found. double check connection");
    }
    ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
}


void AdminPage::on_cancelButton_3_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
}

void AdminPage::on_deleteItemBttn_clicked()
{
    QString deleteItem = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                               tr("Item to be deleted:"), QLineEdit::Normal,
                                               QDir::home().dirName());

    data.prepare("DELETE FROM inventory WHERE item == '"+deleteItem+"");
    data.exec();

    QMessageBox::about(this, "", "The item was deleted. double check if error occured");

}

void AdminPage::on_addCustomersBttn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addCustomer);
}

void AdminPage::on_addItemBttn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->addItem);
}

void AdminPage::on_Close_clicked()
{
    this->close();
}
