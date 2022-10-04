#include "user.h"
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;

const QString &User::getUserId() const
{
    return userId;
}

void User::setUserId(QString newUserId)
{
    userId = newUserId;
}
const QString &User::getEmployeeName() const
{
    return employeeName;
}

void User::setEmployeeName(const QString &newEmployeeName)
{
    employeeName = newEmployeeName;
}

const QString &User::getAddress() const
{
    return address;
}

void User::setAddress(const QString &newAddress)
{
    address = newAddress;
}

const QString &User::getGender() const
{
    return gender;
}

void User::setGender(const QString &newGender)
{
    gender = newGender;
}

const QString &User::getDepartmentId() const
{
    return departmentId;
}

void User::setDepartmentId(const QString &newDepartmentId)
{    if(newDepartmentId == "Marketing"){
        departmentId = "1";
    }
    else if(newDepartmentId == "Accounting and Finance"){
            departmentId = "2";
    }
    else if(newDepartmentId == "Human Resource Management"){
            departmentId = "3";
    }
    else if(newDepartmentId == "Research and Development"){
            departmentId = "4";
    }
    else if(newDepartmentId == "IT and Equipment"){
            departmentId = "5";
    }
    else if(newDepartmentId == "Operational"){
            departmentId = "6";
     }
//    departmentId = newDepartmentId;
}

const QString &User::getUserroleId() const
{
    return userroleId;
}

void User::setUserroleId(const QString &newUserroleId)
{
    if(newUserroleId== "CEO"){
        userroleId = "1";
    }
    if(newUserroleId== "Manager"){
        userroleId = "2";
    }
    if(newUserroleId== "Staff"){
        userroleId = "3";
    }
}

const QString &User::getUsername() const
{
    return username;
}

void User::setUsername(const QString &newUsername)
{
    username = newUsername;
}

const QString &User::getPassword() const
{
    return password;
}

void User::setPassword(const QString &newPassword)
{
    password = newPassword;
}



User::User()
{}

void User::GetAllEmployeeDetails(){
    QSqlQuery qry;
    qry.prepare("SELECT "
                "Id AS 'Id',"
                "Name AS 'Employee Name',"
                "Address AS 'Address',"
                "Gender AS 'Gender',"
                "FkDepartmentId AS 'DepartmentId',"
                "(SELECT DepartmentName FROM department WHERE id = fkDepartmentId) AS 'Department',"
                "fkUserRole AS 'UserRoleId',"
                "(SELECT UserRole FROM userrole WHERE id = fkUserRole) AS 'User Role',"
                "Username AS 'Username',"
                "Password AS 'Password'"
                "FROM user "
                "ORDER BY UserRoleId");

    if(qry.exec())
    {
        QMessageBox::critical(nullptr, "save", "saved");
        dbConnection.CloseConnection();
    }
    else{
        QMessageBox::critical(nullptr, "save", "not saved");
    }
}


//void User::AddUser(User user){
//    QSqlQuery qry;
//    qry.prepare("INSERT INTO user (Name, Address, Gender, fkDepartmentId, fkUserRole, Username, Password)"
//                      "VALUES ('" + user.name + "','"
//                                  + user.address + "','"
//                                  + user.gender + "','"
//                                  + user.department + "','"
//                                  + user.userrole + "','"
//                                  + user.username + "','"
//                                  + user.password + "')");
//    if(qry.exec()){
//        QMessageBox::critical(nullptr, "save", "saved");
//        dbConnection.CloseConnection();
//    }
//    else{
//        QMessageBox::critical(nullptr, "save", "not saved");
//    }
//}

//void User::EditUser(User editUser){
//    QSqlQuery qry;
//    qry.prepare("UPDATE user SET "
//                "Name = '" + editUser.name + "',"
//                "Address = '" + editUser.address + "',"
//                "Gender = '" + editUser.gender + "',"
//                "fkDepartmentId = '" + editUser.department+ "', "
//                "fkUserRole = '" + editUser.userrole + "', "
//                "Username = '" + editUser.username + "',"
//                "Password = '" + editUser.password + "'"
//                "WHERE Id = " + editUser.id + " ");
//    if(qry.exec()){
//        QMessageBox::critical(nullptr, "Update", "Updated");
//        dbConnection.CloseConnection();
//    }
//    else{
//        QMessageBox::critical(nullptr, "Update", "not Updated");
//    }
//}

//void User::DeleteUser(int userId){
//    QSqlQuery qry;
//    qry.prepare("DELETE FROM user WHERE Id = "+QString::number(userId) );

//    if(qry.exec()){
//        QMessageBox::critical(nullptr, "Delete", "Deleted");
//        dbConnection.CloseConnection();
//    }
//    else{
//        QMessageBox::critical(nullptr, "Delete", "not Deleted");
//    }
//}

