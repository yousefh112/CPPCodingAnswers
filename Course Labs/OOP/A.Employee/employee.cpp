#include "employee.h"
#include <iostream>
#include <string>
using namespace std;
// Constructor for the Employee class. Sets default values for id, salary, fullname, and status.
Employee::Employee()
{
    M_Id = 0;
    M_Salary = 0;
    M_FullName = "";
    M_Status = false;
}

// Parameterized constructor for the Employee class. Sets values for id, salary, fullname, and status.
Employee::Employee(int id,
             double salary,
             string fullName,
             bool status)
{
    M_Id = id;
    M_Salary = salary;
    M_FullName = fullName;
    M_Status = status;
}

// Function to set the id of the employee.
void Employee::Set_Id(int id)
{
    M_Id = id;
}

// Function to get the id of the employee.
int Employee::Get_Id() const
{
    return M_Id;
}

// Function to set the salary of the employee.
void Employee::Set_Salary(double salary)
{
    M_Salary = salary;
}

// Function to get the salary of the employee.
int Employee::Get_Salary() const
{
    return M_Salary;
}

// Function to set the fullname of the employee.
void Employee::Set_Fullname (string firstName, string lastName)
{
    M_FullName = firstName + " " + lastName;
}

// Function to get the fullname of the employee.
string Employee::Get_Fullname()
{
    return M_FullName;
}

// Function to set the status of the employee.
void Employee::Set_Status(bool status)
{
    M_Status = status;
}

// Function to get the status of the employee.
bool Employee::Get_Status() const
{
    return M_Status;
}

// Function to display the details of the employee.
void Employee::display() const
{
    cout << "Employee ID: " << M_Id << endl;
    cout << "Employee Salary: " << M_Salary << endl;
    cout << "Employee Full Name: " << M_FullName << endl;
    cout << "Employee Status: " << (M_Status ? "Active" : "Inactive") << endl;
}
