#ifndef EMPLOYEEHOMESCREEN_H
#define EMPLOYEEHOMESCREEN_H
#include <iostream>
#include <string>
using namespace std;
#include <QDialog>

#include "databaseconnection.h"
#include "myinfo.h"
#include "projects.h"
#include "assignuser.h"
namespace Ui {
class employeehomescreen;
}

class employeehomescreen : public QDialog
{
    Q_OBJECT

public:
    explicit employeehomescreen(QWidget *parent = nullptr);
    ~employeehomescreen();

    DatabaseConnection dbConnection;
    myInfo myinfo;
    void GetAllEmployeeDetails();
    void getAllProjects();
    QString pId, pId1;
    AssignUser *assignUser;
    static QString proidPublic;
    void AssignedProjects();
    void CompletedProjects();
    void InProgressProjects();

private slots:
    void on_btnHome_clicked();

    void on_btnViewProjects_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_btnStartProjcet_clicked();

    void on_dgAssignedProjects_activated(const QModelIndex &index);

    void on_dgCurrentProjects_activated(const QModelIndex &index);

    void on_btnCompleteProject_clicked();

    void on_btnLogout_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::employeehomescreen *ui;
};

#endif // EMPLOYEEHOMESCREEN_H
