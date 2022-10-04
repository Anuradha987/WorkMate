#include "assignuser.h"
#include "ui_assignuser.h"
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;
#include "databaseconnection.h"
#include "projects.h"
#include "ceohomescreen.h"
#include "login.h"

AssignUser::AssignUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AssignUser)
{
    ui->setupUi(this);
    ceohomescreen ceohomescreen_;
    CEOProDetails();
    managerhomescreen managerhomescreen_;
    MANProDetails();

    login login_;
    int role = login_.userrole_;
    QString logId = login_.userId_;
    dbConnection.OpenConnection();
    QSqlQueryModel *modalRole = new QSqlQueryModel();
    QSqlQuery* qryRole = new QSqlQuery(dbConnection.db);
    qryRole->prepare("SELECT Id,Name FROM user WHERE fkDepartmentId= (SELECT fkDepartmentId from user WHERE Id = '"+logId+"' )");
    qryRole->exec();
    modalRole->setQuery(*qryRole);
    ui->cbStaff->setModel(modalRole);
    qDebug() <<(modalRole->rowCount());
    dbConnection.CloseConnection();
}

AssignUser::~AssignUser()
{
    delete ui;
}
void AssignUser::onload(){}
//CEO assigning projects
void AssignUser::CEOProDetails(){
    ceohomescreen ceohomescreen_;
    publicProId1 = ceohomescreen_.proidPublic;

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM project WHERE Id= '"+publicProId1 +"'  ");
    //QMessageBox::critical(this, "g", ""+publicProId1);
    if(qry.exec()){
        while (qry.next()) {
            ui->lblProject->setText(qry.value(1).toString());
            ui->lblProjectName->setText(qry.value(2).toString());
            proDepartment = qry.value(5).toString();
        }
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, tr("error"), qry.lastError().text());
    }
}
//Manager assigning projects.
void AssignUser::MANProDetails(){
    managerhomescreen managerhomescreen_;
    publicProId2 = managerhomescreen_.proidPublic;

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM project WHERE Id= '"+publicProId2 +"'  ");
    if(qry.exec()){
        while (qry.next()) {
            ui->lblProject->setText(qry.value(1).toString());
            ui->lblProjectName->setText(qry.value(2).toString());
            proDepartment = qry.value(5).toString();
        }
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, tr("error"), qry.lastError().text());
    }
}

void AssignUser::on_btnAssign_clicked()
{
    login login_;
    int role = login_.userrole_;
       dbConnection.OpenConnection();
       QSqlQuery qry;
       if(role==1){
            qry.prepare( "UPDATE project SET fkAssignedUser = '" + ui->cbStaff->currentText()+"', fkStatus = 1 WHERE Id = '" + publicProId1 + "' ");
       }
       if(role ==2){
           qry.prepare( "UPDATE project SET fkAssignedUser = '" + ui->cbStaff->currentText()+"', fkStatus = 1 WHERE Id = '" + publicProId2 + "' ");
       }
       if(qry.exec()){
            QMessageBox::information(this, "Assign Project", "Project assigned successfully!");
            dbConnection.CloseConnection();
       }
        else{
            QMessageBox::critical(this, tr("error"), qry.lastError().text());
        }
}
