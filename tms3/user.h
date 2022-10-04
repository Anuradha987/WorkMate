#ifndef USER_H
#define USER_H
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;
#include "databaseconnection.h"
#include "login.h"

class User
{
private :
    QString userId;
    QString employeeName;
    QString address;
    QString gender;
    QString departmentId;
    QString userroleId;
    QString username;
    QString password;

public:
    DatabaseConnection dbConnection;

    User();
    QString val;
    void GetUserById();
    void GetUserById(int userId);
    void GetAllEmployeeDetails();

    void AddUser(User user);
    void EditUser(User editUser);
    void DeleteUser(int userId);


    const QString &getUserId() const;
    void setUserId(const QString newUserId);
    const QString &getEmployeeName() const;
    void setEmployeeName(const QString &newEmployeeName);
    const QString &getAddress() const;
    void setAddress(const QString &newAddress);
    const QString &getGender() const;
    void setGender(const QString &newGender);
    const QString &getDepartmentId() const;
    void setDepartmentId(const QString &newDepartmentId);
    const QString &getUserroleId() const;
    void setUserroleId(const QString &newUserroleId);
    const QString &getUsername() const;
    void setUsername(const QString &newUsername);
    const QString &getPassword() const;
    void setPassword(const QString &newPassword);

    login *login_;

};

#endif // USER_H
