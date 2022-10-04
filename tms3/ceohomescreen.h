#ifndef CEOHOMESCREEN_H
#define CEOHOMESCREEN_H
#include <iostream>
#include <string>
using namespace std;
#include <QDialog>
#include "databaseconnection.h"
#include "myinfo.h"
#include "projects.h"
#include "assignuser.h"

namespace Ui {
class ceohomescreen;
}

class ceohomescreen : public QDialog
{
    Q_OBJECT

public:
    explicit ceohomescreen(QWidget *parent = nullptr);
    ~ceohomescreen();

    DatabaseConnection dbConnection;
    myInfo myinfo;
    void GetAllEmployeeDetails();
    void getAllProjects();
    QString pId;
    AssignUser *assignUser;
    static QString proidPublic;
    void AssignedProjects();
    void CompletedProjects();
    void InProgressProjects();
private slots:


    void on_btnHomeCEO_clicked();

    void on_btnManageEmpCEO_clicked();

    void on_btnManageProjectsCEO_clicked();

    void on_button1_clicked();

    void on_btnAddEmployee_clicked();

    void on_btnEditEmployee_clicked();

    void on_btnDeleteEmployee_clicked();

    void on_btnLoad_clicked();

    void on_dgEmployee_activated(const QModelIndex &index);

    void on_btnAddProject_2_clicked();

    void on_btnEditProject_2_clicked();

    void on_btnDeleteProject_2_clicked();

    void on_dgProject_2_activated(const QModelIndex &index);

    void on_btnAssignUser_2_clicked();

    void on_btnManageProjects_2_clicked();

    void on_dgAssignedProjects_activated(const QModelIndex &index);

    void on_dgCurrentProjects_activated(const QModelIndex &index);

    void on_btnStartProjcet_clicked();

    void on_btnCompleteProject_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_tabWidget_currentChanged(int index);

private:
    Ui::ceohomescreen *ui;
};

#endif // CEOHOMESCREEN_H
