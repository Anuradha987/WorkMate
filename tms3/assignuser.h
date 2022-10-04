#ifndef ASSIGNUSER_H
#define ASSIGNUSER_H

#include <QDialog>
#include <string>
using namespace std;
#include "databaseconnection.h"
#include "projects.h"


namespace Ui {
class AssignUser;
}

class AssignUser : public QDialog
{
    Q_OBJECT

public:
    explicit AssignUser(QWidget *parent = nullptr);
    DatabaseConnection dbConnection;
    ~AssignUser();
    void onload();
    void CEOProDetails();
    void MANProDetails();
    QString proDepartment;
    QString publicProId1;
    QString publicProId2;
    projects projects_;
    QString one = projects_.inProgrees;
    QString two = projects_.Started;
    QString three = projects_.Completed;

private slots:
    void on_btnAssign_clicked();

private:
    Ui::AssignUser *ui;
};

#endif // ASSIGNUSER_H
