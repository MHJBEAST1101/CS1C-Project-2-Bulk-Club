#include "adminpage.h"

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
