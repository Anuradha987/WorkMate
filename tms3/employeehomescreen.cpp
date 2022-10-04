#include "employeehomescreen.h"
#include "ui_employeehomescreen.h"

#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;
#include "databaseconnection.h"
#include <stdbool.h>
#include "user.h"
#include <cstdlib>
#include <QtDebug>
#include "login.h"
#include "myinfo.h"
#include "projects.h"
#include "assignuser.h"

employeehomescreen::employeehomescreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeehomescreen)
{
    ui->setupUi(this);
QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/notStarted.png");  //Enter image path of "notStarted.png" here
int w1 =ui->label_4->width();
int h1 = ui->label_4->height();
ui->label_4->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));

QPixmap pix2("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/InProgress.png");  //Enter image path of "InProgress.png" here
int w2 =ui->label_8->width();
int h2 = ui->label_8->height();
ui->label_8->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

QPixmap pix3("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Completed.png");  //Enter image path of "Completed.png" here
int w3 =ui->label_15->width();
int h3 = ui->label_15->height();
ui->label_15->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));

    AssignedProjects();
    CompletedProjects();
    InProgressProjects();
    on_btnHome_clicked();
}

employeehomescreen::~employeehomescreen()
{
    delete ui;
}
//set user's personal details on labels
void employeehomescreen::on_btnHome_clicked()
{
    ui->homeControlEmp->show();
    ui->tcEmployeeProject->hide();

    login login_;
       QString logId = login_.userId_;

       myInfo myinfo;

       myinfo.GetUserById();
                               ui->lblNameHeader_3->setText(myinfo.MyName);
                               ui->lblRoleHeader_3->setText(myinfo.myRole);
                               ui->lblName_3->setText(myinfo.MyName);
                               ui->lblGender_3->setText(myinfo.myGender);
                               ui->lblAddress_3->setText(myinfo.myAddress);
                               ui->lblDepartment_3->setText(myinfo.myDepartment);
                               ui->lblRole_3->setText(myinfo.myRole);
                               ui->lblUsername_3->setText(myinfo.myUsername);

       myinfo.GetMyProjects();

                               ui->lblNotStartedCount_3->setText((myinfo.inProgress));
                               ui->lblInProgressCount_3->setText((myinfo.notStarted));
                               ui->lblCompletedCount_3->setText((myinfo.Completed));

           if(myinfo.myGender=="Male"){
               QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Male.png");  //Enter the image path of "Male.png" here
               int wid =ui->pUserAvatar->width();
               int hei = ui->pUserAvatar->height();
               ui->pUserAvatar->setPixmap(pix1.scaled(wid,hei,Qt::KeepAspectRatio));
           }
          if(myinfo.myGender=="Female") {
               QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Female.png");  //Enter the image path of "Female.png" here
               int wi =ui->pUserAvatar->width();
               int he = ui->pUserAvatar->height();
               ui->pUserAvatar->setPixmap(pix1.scaled(wi,he,Qt::KeepAspectRatio));
           }
}


void employeehomescreen::on_btnViewProjects_clicked()
{
    ui->homeControlEmp->hide();
    ui->tcEmployeeProject->show();
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
}

// Retrieve assined projectes
void employeehomescreen::AssignedProjects(){
    login login_;
    QString logId = login_.userId_;
    dbConnection.OpenConnection();
    QSqlQueryModel *modalLoadEmp = new QSqlQueryModel();
    QSqlQuery* qryLoadEmp = new QSqlQuery(dbConnection.db);
    qryLoadEmp->prepare("Select Id AS 'Project Id', Code As 'Code', Name AS 'Name', Description AS 'Description', StartMonth AS 'Starting Month' "
                        "from project WHERE fkStatus = 1 AND fkAssignedUser = '"+logId+"' ORDER BY Id");
    qryLoadEmp->exec();
    modalLoadEmp->setQuery(*qryLoadEmp);
    ui->dgAssignedProjects->setModel(modalLoadEmp);

    qDebug() <<(modalLoadEmp->rowCount());
    dbConnection.CloseConnection();
}

// Retrieve completed projects
void employeehomescreen::CompletedProjects(){
    login login_;
    QString logId = login_.userId_;
    dbConnection.OpenConnection();
    QSqlQueryModel *modalLoadEmp = new QSqlQueryModel();
    QSqlQuery* qryLoadEmp = new QSqlQuery(dbConnection.db);
    qryLoadEmp->prepare("Select Id AS 'Project Id', Code As 'Code', Name AS 'Name', Description AS 'Description', StartMonth AS 'Starting Month' "
                        "from project WHERE fkStatus = 3 AND fkAssignedUser = '"+logId+"' ORDER BY Id");
    qryLoadEmp->exec();
    modalLoadEmp->setQuery(*qryLoadEmp);
    ui->dgCompletedProjects->setModel(modalLoadEmp);

    qDebug() <<(modalLoadEmp->rowCount());
    dbConnection.CloseConnection();
}

// Retrieved inprogress projects
void employeehomescreen::InProgressProjects(){
    login login_;
    QString logId = login_.userId_;
    dbConnection.OpenConnection();
    QSqlQueryModel *modalLoadEmp = new QSqlQueryModel();
    QSqlQuery* qryLoadEmp = new QSqlQuery(dbConnection.db);
    qryLoadEmp->prepare("Select Id AS 'Project Id', Code As 'Code', Name AS 'Name', Description AS 'Description', StartMonth AS 'Starting Month' "
                        "from project WHERE fkStatus = 2 AND fkAssignedUser = '"+logId+"' ORDER BY Id");
    qryLoadEmp->exec();
    modalLoadEmp->setQuery(*qryLoadEmp);
    ui->dgCurrentProjects->setModel(modalLoadEmp);

    qDebug() <<(modalLoadEmp->rowCount());
    dbConnection.CloseConnection();
}

//get the project id when click on the table's primary key
void employeehomescreen::on_tableView_activated(const QModelIndex &index)
{
    pId = ui->dgAssignedProjects->model()->data(index).toString();
   // QMessageBox::critical(this, "ff", ""+pId);
}

//set project status to InProgress
void employeehomescreen::on_btnStartProjcet_clicked()
{
    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("UPDATE project SET fkStatus = 2 WHERE Id = " + pId);
    if(qry.exec()){
        QMessageBox::information(this, "Project Status", "Project status marked as started!");
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Project Status", "Couldn't update.");
    }
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
}

//get the project id when click on the table's primary key
void employeehomescreen::on_dgAssignedProjects_activated(const QModelIndex &index)
{
    pId = ui->dgAssignedProjects->model()->data(index).toString();
   // QMessageBox::critical(this, "ff", ""+pId);
}

//get the project id when click on the table's primary key
void employeehomescreen::on_dgCurrentProjects_activated(const QModelIndex &index)
{
    pId = ui->dgCurrentProjects->model()->data(index).toString();
  //  QMessageBox::critical(this, "ff", ""+pId);
}

//set project status to completed
void employeehomescreen::on_btnCompleteProject_clicked()
{
    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("UPDATE project SET fkStatus = 3 WHERE Id = " + pId);
    if(qry.exec()){
        QMessageBox::information(this, "Project Status", "Project status marked as completed!");
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Update", "Couldn't update.");
    }
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
}


void employeehomescreen::on_btnLogout_clicked()
{
        login *login_;
        this->hide();
        login_ = new login(this);
        login_->show();
}


void employeehomescreen::on_tabWidget_currentChanged(int index)
{
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
}

