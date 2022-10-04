#include "managerhomescreen.h"
#include "ui_managerhomescreen.h"

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

managerhomescreen::managerhomescreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managerhomescreen)
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
    qryRole->prepare("SELECT UserRole FROM userrole WHERE Id!=1");
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
    getAllProjects();
    myinfo.GetMyProjects();

    dbConnection.CloseConnection();

    AssignedProjects();
    CompletedProjects();
    InProgressProjects();
    on_btnHome_clicked();
}

managerhomescreen::~managerhomescreen()
{
    delete ui;
}
//Get employee details
void managerhomescreen::GetAllEmployeeDetails(){
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
    ui->dgEmployee_2->setModel(modalLoadEmp);

    qDebug() <<(modalLoadEmp->rowCount());
    dbConnection.CloseConnection();
}
//set user's personal details on labels
void managerhomescreen::on_btnHome_clicked()
{
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

     ui->homeControlManager->show();
     ui->manageEmployeeControl->hide();
     ui->manageProjectControl->hide();
     ui->tcManagerProject->hide();


     if(myinfo.myGender=="Male"){
         QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Male.png");  //enter the Male.png image here
         int wid =ui->pUserAvatar->width();
         int hei = ui->pUserAvatar->height();
         ui->pUserAvatar->setPixmap(pix1.scaled(wid,hei,Qt::KeepAspectRatio));
     }
    if(myinfo.myGender=="Female") {
         QPixmap pix1("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/tms3Pics/Female.png");  //enter the Female.png image here
         int wi =ui->pUserAvatar->width();
         int he = ui->pUserAvatar->height();
         ui->pUserAvatar->setPixmap(pix1.scaled(wi,he,Qt::KeepAspectRatio));
     }
}


void managerhomescreen::on_btnManageEmp_clicked()
{
    ui->homeControlManager->hide();
    ui->manageEmployeeControl->show();
    ui->manageProjectControl->hide();
    ui->tcManagerProject->hide();
    GetAllEmployeeDetails();
}


void managerhomescreen::on_btnManageProjects_clicked()
{
    ui->homeControlManager->hide();
    ui->manageEmployeeControl->hide();
    ui->manageProjectControl->show();
    ui->tcManagerProject->hide();
    getAllProjects();
}

void managerhomescreen::on_btnManageProjects_2_clicked()
{
    ui->homeControlManager->hide();
    ui->manageEmployeeControl->hide();
    ui->manageProjectControl->hide();
    ui->tcManagerProject->show();
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
   // getAllProjects();
}

User user1;
//    Add new employee details to databse
void managerhomescreen::on_btnAddEmployee_2_clicked()
{


        user1.setEmployeeName(ui->txtEmployeeName->text());
        user1.setAddress(ui->txtAddress->toPlainText());
        user1.setGender(ui->cbGender->currentText());
        user1.setUserroleId(ui->cbUserRole->currentText());
        user1.setDepartmentId(ui->cbDepartment->currentText());
        user1.setUsername(ui->txtUsername->text());
        user1.setPassword(ui->txtPassword->text());
//encrypting the password
        QString Encrypting;
        Encrypting = QString(QCryptographicHash::hash((user1.getPassword()).toLocal8Bit(),QCryptographicHash::Md5));
        dbConnection.OpenConnection();
        QSqlQuery qry;
        qry.prepare("INSERT INTO user (Name, Address, Gender, fkDepartmentId, fkUserRole, Username, Password)"
                          "VALUES ('" + user1.getEmployeeName() + "','"
                                      + user1.getAddress() + "','"
                                      + user1.getGender() + "','"
                                      + user1.getDepartmentId() + "','"
                                      + user1.getUserroleId() + "','"
                                      + user1.getUsername() + "','"
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

//    editing employee details to databse
void managerhomescreen::on_btnEditEmployee_2_clicked()
{
    user1.setEmployeeName(ui->txtEmployeeName->text());
    user1.setAddress(ui->txtAddress->toPlainText());
    user1.setGender(ui->cbGender->currentText());
    user1.setUserroleId(ui->cbUserRole->currentText());
    user1.setDepartmentId(ui->cbDepartment->currentText());
    user1.setUsername(ui->txtUsername->text());
  //  user1.setPassword(ui->txtPassword->text());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("UPDATE user SET "
                "Name = '" + user1.getEmployeeName() + "'," +
                "Address = '" + user1.getAddress() + "'," +
                "Gender = '" + user1.getGender() + "'," +
                "fkDepartmentId = '" + user1.getDepartmentId() + "', " +
                "fkUserRole = '" + user1.getUserroleId() + "', " +
                "Username = '" + user1.getUsername() + "' " +
//                "Password = '" + user1.getPassword() + "'" +
                "WHERE Id = " + user1.getUserId() + "");
    if(qry.exec()){
        QMessageBox::information(this, "Updating Employee Data", "Employee Details Updated Successfully");
        dbConnection.CloseConnection();
        GetAllEmployeeDetails();
    }
    else{
        QMessageBox::critical(this, "Updating Employee Data", "Couldn't Update Employee Details");
    }
}

//deleting employee details
void managerhomescreen::on_btnDeleteEmployee_2_clicked()
{
    user1.setEmployeeName(ui->txtEmployeeName->text());
    user1.setAddress(ui->txtAddress->toPlainText());
    user1.setGender(ui->cbGender->currentText());
    user1.setUserroleId(ui->cbUserRole->currentText());
    user1.setDepartmentId(ui->cbDepartment->currentText());
    user1.setUsername(ui->txtUsername->text());
//   user1.setPassword(ui->txtPassword->text());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("DELETE FROM user WHERE Id = " + user1.getUserId());
    if(qry.exec()){
        QMessageBox::information(this, "Deleting Employee Data", "Employee Details Deleted Successfully");
        dbConnection.CloseConnection();
        GetAllEmployeeDetails();
    }
    else{
        QMessageBox::critical(this, "Deleting Employee Data", "Couldn't Delete Employee Details");
    }
}

//set selected user data from the table to text boxes
void managerhomescreen::on_dgEmployee_2_activated(const QModelIndex &index)
{
    user1.setUserId(ui->dgEmployee_2->model()->data(index).toString());
 //   QString val = user.getUserId();
 ui->txtPassword->setDisabled(true);
    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("SELECT Name, Address, Gender, (SELECT DepartmentName from department WHERE id = fkDepartmentId ), (SELECT UserRole from userrole WHERE Id = fkUserRole), Username FROM user WHERE id= '"+user1.getUserId() +"' AND fkUserRole!=1 ");
    if(qry.exec()){
        while (qry.next()) {
            ui->txtEmployeeName->setText(qry.value(0).toString());
            ui->txtAddress->setText(qry.value(1).toString());
            ui->cbGender->setCurrentText(qry.value(2).toString());
            ui->cbDepartment->setCurrentText(qry.value(3).toString());
            ui->cbUserRole->setCurrentText(qry.value(4).toString());
            ui->txtUsername->setText(qry.value(5).toString());
//            ui->txtPassword->setText(qry.value(6).toString());
        }
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, tr("error"), qry.lastError().text());
    }
}

//______________________________________________________________________________________________________________________________

myInfo myinfo1;
   projects projects1;
//get projects onto the table
void managerhomescreen::getAllProjects(){
    login login_;
    QString logId = login_.userId_;
    dbConnection.OpenConnection();
    QSqlQueryModel *modalLoadPro = new QSqlQueryModel();
    QSqlQuery* qryLoadPro = new QSqlQuery(dbConnection.db);
    qryLoadPro->prepare("SELECT Id As 'Id',"
                        "Code AS 'Code',"
                        "Name AS 'Project Name',"
                        "Description AS 'Description',"
                        "StartMonth AS 'Starting Month',"
                        "(SELECT DepartmentName FROM department WHERE id = fkDepartmentId) AS 'Department',"
                        "(SELECT Name FROM user WHERE id = fkAssignedUser) AS 'Assigned User',"
                        "(SELECT StatusName FROM projectstatus WHERE id = fkStatus) AS 'Status'"
                        "FROM project WHERE fkDepartmentId= (SELECT fkDepartmentId from user WHERE Id = '"+logId+"' ) ");
    qryLoadPro->exec();
    modalLoadPro->setQuery(*qryLoadPro);
    ui->dgProject_2->setModel(modalLoadPro);

    qDebug() <<(modalLoadPro->rowCount());
    dbConnection.CloseConnection();

}

QString managerhomescreen::proidPublic;
//set project details to textboxes once double-clicked on a project record.
void managerhomescreen::on_dgProject_2_activated(const QModelIndex &index)
{
    projects1.setProId (ui->dgProject_2->model()->data(index).toString());

    dbConnection.OpenConnection();
        QSqlQuery qry;
        qry.prepare("SELECT Code, Name, Description, StartMonth, (SELECT DepartmentName from department WHERE id = fkDepartmentId) FROM project WHERE id= '"+projects1.getProId()+"'  ");

        if(qry.exec()){
            while (qry.next()) {
                ui->txtProjectCode->setText(qry.value(0).toString());
                ui->txtProjectName->setText(qry.value(1).toString());
                ui->txtDescription->setPlainText(qry.value(2).toString());
                ui->cbStartingMonth->setCurrentText(qry.value(3).toString());
                ui->cbDepartment_2->setCurrentText(qry.value(4).toString());
            }
            dbConnection.CloseConnection();
            proidPublic = projects1.getProId();
        }
        else{
            QMessageBox::critical(this, tr("error"), qry.lastError().text());
        }
         //QMessageBox::critical(this, "f", ""+projects1.getProId());
}

//add project details
void managerhomescreen::on_btnAddProject_2_clicked()
{
    projects1.setProjectCode(ui->txtProjectCode->text());
    projects1.setProjectName(ui->txtProjectName->text());
    projects1.setDescription(ui->txtDescription->toPlainText());
    projects1.setStartingMonth(ui->cbStartingMonth->currentText());
    projects1.setDepartmentId(ui->cbDepartment_2->currentText());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("INSERT INTO project (Code, Name, Description, StartMonth, fkDepartmentId)"
                      "VALUES ('" + projects1.getProjectCode() + "','"
                                  + projects1.getProjectName() + "','"
                                  + projects1.getDescription() + "','"
                                  + projects1.getStartingMonth() + "','"
                                  + projects1.getDepartmentId() + "')");
    if(qry.exec()){
        QMessageBox::information(this, "Save", "Project saved successfully!");
        getAllProjects();
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Save", "Couldn't save the project.");
    }
    getAllProjects();
}

//edit project details
void managerhomescreen::on_btnEditProject_2_clicked()
{
    projects1.setProjectCode(ui->txtProjectCode->text());
    projects1.setProjectName(ui->txtProjectName->text());
    projects1.setDescription(ui->txtDescription->toPlainText());
    projects1.setStartingMonth(ui->cbStartingMonth->currentText());
    projects1.setDepartmentId(ui->cbDepartment_2->currentText());

    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("UPDATE project SET "
                       "Code = '" + projects1.getProjectCode() + "'," +
                       "Name = '" + projects1.getProjectName() + "'," +
                       "Description = '" + projects1.getDescription() + "'," +
                       "StartMonth = '" + projects1.getStartingMonth() + "'," +
                       "fkDepartmentId = '" + projects1.getDepartmentId() + "' " +
                       "WHERE Id = " + projects1.getProId() + "");
    if(qry.exec()){
        QMessageBox::information(this, "Update", "Project updated successfully!");
        getAllProjects();
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Update", "Couldn't update the project.");
    }
    getAllProjects();
}

//delete project details
void managerhomescreen::on_btnDeleteProject_2_clicked()
{
    dbConnection.OpenConnection();
    QSqlQuery qry;
    qry.prepare("DELETE FROM project WHERE Id = " + projects1.getProId());
    if(qry.exec()){
        QMessageBox::information(this, "Delete", "Project deleted successfully!");
        getAllProjects();
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(this, "Delete", "Couldn't delete the project.");
    }
    getAllProjects();
}
//select projects to assign
QString assigning1;
void managerhomescreen::on_btnAssignUser_2_clicked()
{
    dbConnection.OpenConnection();
        QSqlQuery qry;
        qry.prepare("SELECT * FROM project WHERE id= '"+projects1.getProId()+"'  ");

        if(qry.exec()){
            while (qry.next()) {
                assigning1 = qry.value(7).toString();

            }
            dbConnection.CloseConnection();

            if(assigning1 == ""){
                assignUser = new AssignUser(this);
                assignUser->show();
               // QMessageBox::critical(this, "f", ""+proidPublic);
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

//select assigned projects
void managerhomescreen::AssignedProjects(){
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
//select completed projects
void managerhomescreen::CompletedProjects(){
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
//select inProgress projects
void managerhomescreen::InProgressProjects(){
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

//select assign project
void managerhomescreen::on_dgAssignedProjects_activated(const QModelIndex &index)
{
    pId = ui->dgAssignedProjects->model()->data(index).toString();
   // QMessageBox::critical(this, "ff", ""+pId);
}

//select inprogress project
void managerhomescreen::on_dgCurrentProjects_activated(const QModelIndex &index)
{
    pId = ui->dgCurrentProjects->model()->data(index).toString();
   // QMessageBox::critical(this, "ff", ""+pId);
}

//set project status to inProgress
void managerhomescreen::on_btnStartProjcet_clicked()
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

//set project status to complete
void managerhomescreen::on_btnCompleteProject_clicked()
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


void managerhomescreen::on_btnLogout_clicked()
{
        login *login_;
        this->hide();
        login_ = new login(this);
        login_->show();
}


void managerhomescreen::on_tabWidget_currentChanged(int index)
{
    AssignedProjects();
    InProgressProjects();
    CompletedProjects();
}

