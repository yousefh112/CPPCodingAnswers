#ifndef employee.h
#define employee .h
#include <iostream>
#include <string>
using namespace std;
class Employee
{

public:
    Employee();
    Employee(int id,
             double salary,
             string fullName,
             bool status);
    void Set_Id(int id);
    int Get_Id() const;
    void Set_Salary(double salary);
    int Get_Salary() const;
    void Set_Fullname (string firstName, string lastName);
    string Get_Fullname();
    void Set_Status(bool status);   
    bool Get_Status() const;
    void display() const;

private:
    int M_Id;
    int M_Salary;
    string M_FullName;
    bool M_Status;
};
#endif