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
    QSqlQuery data;
    QString deleteCustomer = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                                   tr("Customer name:"), QLineEdit::Normal,
                                                   QDir::home().dirName());

    data.prepare("DELETE FROM Customers WHERE name == '"+deleteCustomer+"'");

    if (data.exec() == false)
    {
        QMessageBox::about(this, "", "this customer does not exist in the database");
    }

    data.exec();
    if(data.exec())
    {
    QMessageBox::about(this, "", "The customer was deleted. double check if error occured");
    }

    /*else
    {
    QMessageBox::about(this, "", "This customer does not exist in the database.");
    }*/

 }

void AdminPage::on_addButton_clicked()
{
    QSqlQuery data;
    QString name = ui->addName ->text();
    QString ID = ui->addID->text();
    QString customerType = ui->typeComboBox->currentText();
    QString expDay = ui->dayComboBox->currentText();
    QString expMonth = ui->monthComboBox->currentText();
    QString expYear = ui->yearComboBox->currentText();
    bool check = false;

    for (int i = 0; i < ID.length(); i++)
    {
        if(ID[i] != '0' && ID[i] != '1' && ID[i] != '2' && ID[i] != '3' && ID[i] != '4'
                && ID[i] != '5' && ID[i] != '6' && ID[i] != '7' && ID[i] != '8' && ID[i] != '9')
        {
            check = true;
            break;
        }
    }

    if(check == true)
    {
        QMessageBox::about(this, "Invalid Entry", "There were invalid inputs for your ID. Please enter only numerals (0-9)");
         ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
         return;
    }



    data.prepare("INSERT INTO Customers (name, ID, type, expMonth, expDay, expYear) VALUES('"+name+"', '"+ID+"', '"+customerType+"', '"+expMonth+"', '"+expDay+"', '"+expYear+"')");

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
    QSqlQuery data;
    QString itemName = ui->addItemName->text();
    QString itemPrice = ui->addItemPrice->text();
    QString itemQuantity = ui->addItemQty->text();

    bool check1 = false;
    bool check2 = false;
    int count = 0;

    for (int i = 0; i < itemPrice.length(); i++)\
    {
        if(itemPrice[i] != '0' && itemPrice[i] != '1' && itemPrice[i] != '2' && itemPrice[i] != '3'
                && itemPrice[i] != '4' && itemPrice[i] != '5'
                && itemPrice[i] != '6' && itemPrice[i] != '7'
                && itemPrice[i] != '8' && itemPrice[i] != '9' && itemPrice[i] != '.')
        {
            check1 = true;
            break;
        }
        if(itemPrice[i] == '.')
        {
            count++;
        }

    }

    for (int i = 0; i < itemQuantity.length(); i++)\
    {
        if(itemQuantity[i] != '0' && itemQuantity[i] != '1' && itemQuantity[i] != '2' && itemQuantity[i] != '3'
                && itemQuantity[i] != '4' && itemQuantity[i] != '5'
                && itemQuantity[i] != '6' && itemQuantity[i] != '7'
                && itemQuantity[i] != '8' && itemQuantity[i] != '9')
        {
            check2 = true;
            break;
        }
    }

    if(check1 == true)
    {
        QMessageBox::about(this, "Invalid Input", "There was an invalid input. Please use only Numerals(0-9) and the . ");
        ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
        return;
    }

    data.prepare("INSERT INTO inventory (item, price, quantity) VALUES ('"+itemName+"', '"+itemPrice+"', '"+itemQuantity+"')");

    if(check2 == true)
    {
        QMessageBox::about(this, "Invalid Input", "There was an invalid input. Please use only Numerals(0-9) and the . ");
        ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
        return;
    }

    if(check1 == true && check2 == true)
    {
        QMessageBox::about(this, "Invalid Input", "both itemName and ItemQuantity have invalid inputs\nPlease use numerals and a . for the price\nPlease use only numerals for the quantity");
        ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
        return;
    }

    if (count > 1)
    {
        QMessageBox::about(this,"", "Invalid input. Use only one . for price");
        ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
        return;
    }


    if(data.exec())
    {
        QMessageBox::about(this, "", "The item was added. double check if error occured");
    }
    else
    {
        QMessageBox::about(this, "Error", "Database not found double check path to database");
    }
    ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
}


void AdminPage::on_cancelButton_3_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->adminHomePage);
}

void AdminPage::on_deleteItemBttn_clicked()
{
    QSqlQuery data;
    QString deleteItem = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                               tr("Item to be deleted:"), QLineEdit::Normal,
                                               QDir::home().dirName());

    data.prepare("DELETE FROM inventory WHERE item == '"+deleteItem+"'");

    if (data.exec() == false)
    {
        QMessageBox::about(this, "", "this item does not exist in the database");
    }

    data.exec();
    if(data.exec() == true)
    {
    QMessageBox::about(this, "", "The item was deleted. double check if error occured");
    }


    /*{
    QMessageBox::about(this, "", "This item does not exist in the database.");
    }*/

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
