#include "ceohomescreen.h"
#include "ui_ceohomescreen.h"

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

ceohomescreen::ceohomescreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ceohomescreen)
{
    ui->setupUi(this);
    QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/notStarted.png");  //Enter image path of "notStarted.png" here
    int w1 =ui->label_4->width();
    int h1 = ui->label_4->height();
    ui->label_4->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));

    QPixmap pix2("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/InProgress.png"); //Enter image path of "InProgress.png" here
    int w2 =ui->label_8->width();
    int h2 = ui->label_8->height();
    ui->label_8->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

    QPixmap pix3("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Completed.png"); //Enter image path of "notStarted.png" here
    int w3 =ui->label_15->width();
    int h3 = ui->label_15->height();
    ui->label_15->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));

    login login_;

// Add gender values to combo box
    ui->cbGender->addItem("Male");
    ui->cbGender->addItem("Female");

// Add Department to combo box from the database
    DatabaseConnection dbConnection;
    dbConnection.OpenConnection();

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(dbConnection.db);
    qry->prepare("SELECT DepartmentName FROM department");
    qry->exec();
    modal->setQuery(*qry);
    ui->cbDepartment->setModel(modal);
    ui->cbDepartment_2->setModel(modal);
    qDebug() <<(modal->rowCount());


// Add User roles to combo box from the database
    QSqlQueryModel *modalRole = new QSqlQueryModel();
    QSqlQuery* qryRole = new QSqlQuery(dbConnection.db);
    qryRole->prepare("SELECT UserRole FROM userrole");
    qryRole->exec();
    modalRole->setQuery(*qryRole);
    ui->cbUserRole->setModel(modalRole);
    qDebug() <<(modalRole->rowCount());


    //Add Months to combo box
        ui->cbStartingMonth->addItem("January");
        ui->cbStartingMonth->addItem("February");
        ui->cbStartingMonth->addItem("March");
        ui->cbStartingMonth->addItem("April");
        ui->cbStartingMonth->addItem("May");
        ui->cbStartingMonth->addItem("June");
        ui->cbStartingMonth->addItem("July");
        ui->cbStartingMonth->addItem("August");
        ui->cbStartingMonth->addItem("September");
        ui->cbStartingMonth->addItem("October");
        ui->cbStartingMonth->addItem("November");
        ui->cbStartingMonth->addItem("December");

    GetAllEmployeeDetails();
    myinfo.GetMyProjects();

    dbConnection.CloseConnection();

    AssignedProjects();
    CompletedProjects();
    InProgressProjects();
    on_btnHomeCEO_clicked();

}



//Get employee details
void ceohomescreen::GetAllEmployeeDetails(){
    dbConnection.OpenConnection();
    QSqlQueryModel *modalLoadEmp = new QSqlQueryModel();
    QSqlQuery* qryLoadEmp = new QSqlQuery(dbConnection.db);
    qryLoadEmp->prepare("Select Id AS 'Employee Id',"
                        "Name AS 'Employee Name', "
                        "Address AS 'Address',"
                        "Gender AS 'Gender',"
                        "(SELECT DepartmentName FROM department WHERE id = fkDepartmentId) AS 'Department',"
                        "(SELECT UserRole FROM userrole WHERE id = fkUserRole) AS 'User Role',"
                        "Username AS 'Username',"
                        "Password AS 'Password'"
                        "from user ORDER BY Id");
    qryLoadEmp->exec();
    modalLoadEmp->setQuery(*qryLoadEmp);
    ui->dgEmployee->setModel(modalLoadEmp);

    qDebug() <<(modalLoadEmp->rowCount());
    dbConnection.CloseConnection();
}
ceohomescreen::~ceohomescreen()
{
    delete ui;
}
//set user's personal details on labels
void ceohomescreen::on_btnHomeCEO_clicked()
{   login login_;
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

    ui->homeControlCEO->show();
    ui->ucManageEmployeeControl->hide();
    ui->usManageProjectControl->hide();
    ui->tcCEOProject->hide();

    if(myinfo.myGender=="Male"){
        QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Male.png");
        int wid =ui->pUserAvatar->width();
        int hei = ui->pUserAvatar->height();
        ui->pUserAvatar->setPixmap(pix1.scaled(wid,hei,Qt::KeepAspectRatio));
    }
   if(myinfo.myGender=="Female") {
        QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Female.png");
        int wi =ui->pUserAvatar->width();
        int he = ui->pUserAvatar->height();
        ui->pUserAvatar->setPixmap(pix1.scaled(wi,he,Qt::KeepAspectRatio));
    }

}


void ceohomescreen::on_btnManageEmpCEO_clicked()
{
    ui->homeControlCEO->hide();
    ui->ucManageEmployeeControl->show();
    ui->usManageProjectControl->hide();
    ui->tcCEOProject->hide();

}


void ceohomescreen::on_btnManageProjectsCEO_clicked()
{
    ui->homeControlCEO->hide();
    ui->ucManageEmployeeControl->hide();
    ui->usManageProjectControl->show();
    ui->tcCEOProject->hide();
    getAllProjects();
}

void ceohomescreen::on_btnManageProjects_2_clicked()
{
    ui->homeControlCEO->hide();
    ui->ucManageEmployeeControl->hide();
    ui->usManageProjectControl->hide();
    ui->tcCEOProject->show();
    AssignedProjects();
    CompletedProjects();
    InProgressProjects();
}


User user;

//add employees
void ceohomescreen::on_btnAddEmployee_clicked()
{
//    Add new employee details to databse

    user.setEmployeeName(ui->txtEmployeeName->text());
    user.setAddress(ui->txtAddress->toPlainText());
    user.setGender(ui->cbGender->currentText());
    user.setUserroleId(ui->cbUserRole->currentText());
    user.setDepartmentId(ui->cbDepartment->currentText());
    user.setUsername(ui->txtUsername->text());
    user.setPassword(ui->txtPassword->text());
//store password after encrypting
QString Encrypting;
Encrypting = QString(QCryptographicHash::hash((user.getPassword()).toLocal8Bit(),QCryptographicHash::Md5));

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("INSERT INTO user (Name, Address, Gender, fkDepartmentId, fkUserRole, Username, Password)"
                      "VALUES ('" + user.getEmployeeName() + "','"
                                  + user.getAddress() + "','"
                                  + user.getGender() + "','"
                                  + user.getDepartmentId() + "','"
                                  + user.getUserroleId() + "','"
                                  + user.getUsername() + "','"
                                  + Encrypting + "')");
    if(qry.exec()){
        QMessageBox::information(this, "Adding Employee Data", "New Employee Details Added Successfully");
        dbConnection.CloseConnection();
         GetAllEmployeeDetails();
    }
    else{
        QMessageBox::critical(this, "Adding Employee Data", "Couldn't Add Employee Details");
    }
}

//edit employee
void ceohomescreen::on_btnEditEmployee_clicked()
{

    user.setEmployeeName(ui->txtEmployeeName->text());
    user.setAddress(ui->txtAddress->toPlainText());
    user.setGender(ui->cbGender->currentText());
    user.setUserroleId(ui->cbUserRole->currentText());
    user.setDepartmentId(ui->cbDepartment->currentText());
    user.setUsername(ui->txtUsername->text());
  //  user.setPassword(ui->txtPassword->text());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("UPDATE user SET "
                "Name = '" + user.getEmployeeName() + "'," +
                "Address = '" + user.getAddress() + "'," +
                "Gender = '" + user.getGender() + "'," +
                "fkDepartmentId = '" + user.getDepartmentId() + "', " +
                "fkUserRole = '" + user.getUserroleId() + "', " +
                "Username = '" + user.getUsername() + "'" +
                //"Password = '" + user.getPassword() + "'" +
                "WHERE Id = " + user.getUserId() + "");

    if(qry.exec()){
        QMessageBox::information(this, "Updating Employee Data", "Employee Details Updated Successfully");
        dbConnection.CloseConnection();
        GetAllEmployeeDetails();
    }
    else{
        QMessageBox::critical(this, "Updating Employee Data", "Couldn't Update Employee Details");
    }
}

//delete employee
void ceohomescreen::on_btnDeleteEmployee_clicked()
{
    user.setEmployeeName(ui->txtEmployeeName->text());
    user.setAddress(ui->txtAddress->toPlainText());
    user.setGender(ui->cbGender->currentText());
    user.setUserroleId(ui->cbUserRole->currentText());
    user.setDepartmentId(ui->cbDepartment->currentText());
    user.setUsername(ui->txtUsername->text());
   // user.setPassword(ui->txtPassword->text());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("DELETE FROM user WHERE Id = " + user.getUserId());
    if(qry.exec()){
        QMessageBox::information(this, "Deleting Employee Data", "Employee Details Deleted Successfully");
        dbConnection.CloseConnection();
        GetAllEmployeeDetails();
    }
    else{
        QMessageBox::critical(this, "Deleting Employee Data", "Couldn't Delete Employee Details");
    }

}




//set user details on textboxes once record was double-clicked
void ceohomescreen::on_dgEmployee_activated(const QModelIndex &index)
{
    user.setUserId(ui->dgEmployee->model()->data(index).toString());
 //   QString val = user.getUserId();
    ui->txtPassword->setDisabled(true);
    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("SELECT Name, Address, Gender, (SELECT DepartmentName from department WHERE id = fkDepartmentId ), (SELECT UserRole from userrole WHERE Id = fkUserRole), Username FROM user WHERE id= '"+user.getUserId() +"'  ");
    if(qry.exec()){
        while (qry.next()) {
            ui->txtEmployeeName->setText(qry.value(0).toString());
            ui->txtAddress->setText(qry.value(1).toString());
            ui->cbGender->setCurrentText(qry.value(2).toString());
            ui->cbDepartment->setCurrentText(qry.value(3).toString());
            ui->cbUserRole->setCurrentText(qry.value(4).toString());
            ui->txtUsername->setText(qry.value(5).toString());
           //ui->txtPassword->setText(qry.value(6).toString());
        }
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, tr("error"), qry.lastError().text());
    }
}

void ceohomescreen::on_btnLoad_clicked()
{}
void ceohomescreen::on_button1_clicked()
{ login *login_;
    this->hide();
    login_ = new login(this);
    login_->show();
}
//______________________________________________________________________________________________________________________________

   projects projects_;
//select projects
void ceohomescreen::getAllProjects(){
    dbConnection.OpenConnection();
    QSqlQueryModel *modalLoadPro = new QSqlQueryModel();
    QSqlQuery* qryLoadPro = new QSqlQuery(dbConnection.db);
    qryLoadPro->prepare("SELECT Id As 'Project Id',"
                        "Code AS 'Code',"
                        "Name AS 'Project Name',"
                        "Description AS 'Description',"
                        "StartMonth AS 'Starting Month',"
                        "(SELECT DepartmentName FROM department WHERE id = fkDepartmentId) AS 'Department',"
                        "(SELECT Name FROM user WHERE id = fkAssignedUser) AS 'Assigned User',"
                        "(SELECT StatusName FROM projectstatus WHERE id = fkStatus) AS 'Status'"
                        "FROM project");
    qryLoadPro->exec();
    modalLoadPro->setQuery(*qryLoadPro);
    ui->dgProject_2->setModel(modalLoadPro);

    qDebug() <<(modalLoadPro->rowCount());
    dbConnection.CloseConnection();

}

//set project details to textboxes
QString ceohomescreen::proidPublic;
void ceohomescreen::on_dgProject_2_activated(const QModelIndex &index)
{
projects_.setProId (ui->dgProject_2->model()->data(index).toString());

dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("SELECT Code, Name, Description, StartMonth, (SELECT DepartmentName from department WHERE id = fkDepartmentId) FROM project WHERE id= '"+projects_.getProId()+"'  ");

    if(qry.exec()){
        while (qry.next()) {
            ui->txtProjectCode->setText(qry.value(0).toString());
            ui->txtProjectName->setText(qry.value(1).toString());
            ui->txtDescription->setPlainText(qry.value(2).toString());
            ui->cbStartingMonth->setCurrentText(qry.value(3).toString());
            ui->cbDepartment_2->setCurrentText(qry.value(4).toString());
        }
        dbConnection.CloseConnection();
        proidPublic = projects_.getProId();
    }
    else{
        QMessageBox::critical(this, tr("error"), qry.lastError().text());
    }
    // QMessageBox::information(this, "Project ID", ""+projects_.getProId());
}

//add projects
void ceohomescreen::on_btnAddProject_2_clicked()
{
    projects_.setProjectCode(ui->txtProjectCode->text());
    projects_.setProjectName(ui->txtProjectName->text());
    projects_.setDescription(ui->txtDescription->toPlainText());
    projects_.setStartingMonth(ui->cbStartingMonth->currentText());
    projects_.setDepartmentId(ui->cbDepartment_2->currentText());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("INSERT INTO project (Code, Name, Description, StartMonth, fkDepartmentId)"
                      "VALUES ('" + projects_.getProjectCode() + "','"
                                  + projects_.getProjectName() + "','"
                                  + projects_.getDescription() + "','"
                                  + projects_.getStartingMonth() + "','"
                                  + projects_.getDepartmentId() + "')");
    if(qry.exec()){
        QMessageBox::information(this, "Save", "Project saved successfully!");
        getAllProjects();
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Save", "Couldn't save the project.");
    }
}


//edit projects
void ceohomescreen::on_btnEditProject_2_clicked()
{
    projects_.setProjectCode(ui->txtProjectCode->text());
    projects_.setProjectName(ui->txtProjectName->text());
    projects_.setDescription(ui->txtDescription->toPlainText());
    projects_.setStartingMonth(ui->cbStartingMonth->currentText());
    projects_.setDepartmentId(ui->cbDepartment_2->currentText());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("UPDATE project SET "
                       "Code = '" + projects_.getProjectCode() + "'," +
                       "Name = '" + projects_.getProjectName() + "'," +
                       "Description = '" + projects_.getDescription() + "'," +
                       "StartMonth = '" + projects_.getStartingMonth() + "'," +
                       "fkDepartmentId = '" + projects_.getDepartmentId() + "' " +
                       "WHERE Id = " + projects_.getProId() + "");
    if(qry.exec()){
        QMessageBox::information(this, "Update", "Project updated successfully!");
        getAllProjects();
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Update", "Couldn't update the project.");
    }
}

//delete projects
void ceohomescreen::on_btnDeleteProject_2_clicked()
{
    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("DELETE FROM project WHERE Id = " + projects_.getProId());
    if(qry.exec()){
        QMessageBox::information(this, "Delete", "Project deleted successfully!");
        getAllProjects();
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Delete", "Couldn't delete the project.");
    }
}
//selecting a project from the table to assign to user
QString assigning;
void ceohomescreen::on_btnAssignUser_2_clicked()
{
    dbConnection.OpenConnection();
        QSqlQuery qry;
        qry.prepare("SELECT * FROM project WHERE id= '"+projects_.getProId()+"'  ");

        if(qry.exec()){
            while (qry.next()) {
                assigning = qry.value(7).toString();

            }
            dbConnection.CloseConnection();

            if(assigning == ""){
                assignUser = new AssignUser(this);
                assignUser->show();
               // QMessageBox::critical(this, "f", ""+proidPublic);
                getAllProjects();
            }
            else{
                QMessageBox::warning(this, "Alert", "This project has been already assigned.");
            }
        }
        else{
            QMessageBox::critical(this, tr("error"), qry.lastError().text());
        }
       // getAllProjects();
}
//get assigned projects
void ceohomescreen::AssignedProjects(){
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
//get completed projects
void ceohomescreen::CompletedProjects(){
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
//get inprogress projects
void ceohomescreen::InProgressProjects(){
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


void ceohomescreen::on_dgAssignedProjects_activated(const QModelIndex &index)
{
    pId = ui->dgAssignedProjects->model()->data(index).toString();
   // QMessageBox::critical(this, "ff", ""+pId);
}


void ceohomescreen::on_dgCurrentProjects_activated(const QModelIndex &index)
{
    pId = ui->dgCurrentProjects->model()->data(index).toString();
    //QMessageBox::critical(this, "ff", ""+pId);
}

//set project status to inProgress
void ceohomescreen::on_btnStartProjcet_clicked()
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

//set project status to completed
void ceohomescreen::on_btnCompleteProject_clicked()
{
    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("UPDATE project SET fkStatus = 3 WHERE Id = " + pId);
    if(qry.exec()){
        QMessageBox::information(this, "Project Status", "Project status marked as completed!");
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Project Status", "Couldn't update.");
    }
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
}


void ceohomescreen::on_tabWidget_tabBarClicked(int index)
{

}


void ceohomescreen::on_tabWidget_currentChanged(int index)
{
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
}

