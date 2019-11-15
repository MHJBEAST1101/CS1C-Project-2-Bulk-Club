#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QMainWindow>
#include "ui_adminpage.h"
#include "dbmanager.h"
#include <QtSql>

namespace Ui {
class AdminPage;
}

class AdminPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr);
    ~AdminPage();

private:
    Ui::AdminPage *ui;
    DBManager databaseObj;
};

#endif // ADMINPAGE_H
