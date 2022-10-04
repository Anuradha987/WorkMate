#ifndef MANAGERHOMESCREEN_H
#define MANAGERHOMESCREEN_H
#include <iostream>
#include <string>
using namespace std;
#include <QDialog>
#include "databaseconnection.h"
#include "myinfo.h"
#include "projects.h"
#include "assignuser.h"


namespace Ui {
class managerhomescreen;
}

class managerhomescreen : public QDialog
{
    Q_OBJECT

public:
    explicit managerhomescreen(QWidget *parent = nullptr);
    ~managerhomescreen();

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
    void on_btnHome_clicked();

    void on_btnManageEmp_clicked();

    void on_btnManageProjects_clicked();

    void on_btnAddEmployee_2_clicked();

    void on_btnEditEmployee_2_clicked();

    void on_btnDeleteEmployee_2_clicked();

    void on_dgEmployee_2_activated(const QModelIndex &index);

    void on_dgProject_2_activated(const QModelIndex &index);

    void on_btnAddProject_2_clicked();

    void on_btnEditProject_2_clicked();

    void on_btnDeleteProject_2_clicked();

    void on_btnAssignUser_2_clicked();

    void on_btnManageProjects_2_clicked();

    void on_dgAssignedProjects_activated(const QModelIndex &index);

    void on_dgCurrentProjects_activated(const QModelIndex &index);

    void on_btnStartProjcet_clicked();

    void on_btnCompleteProject_clicked();

    void on_btnLogout_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::managerhomescreen *ui;
};

#endif // MANAGERHOMESCREEN_H
