#include "employee.h"
#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int x;
    double y;
    string s1 , s2;
    bool a;

    // create an Employee object
    Employee emp1;

    // prompt user to enter employee details
    cout << "Please enter the employee ID: " << endl;
    cin >> x;
    emp1.Set_Id(x); // set employee ID

    cout << "Please enter the employee Salary: " << endl;
    cin >> y;
    emp1.Set_Salary(y); // set employee salary

    cout << "Please enter the employee First Name: " << endl;
    cin >> s1;
    cout << "Please enter the employee Second Name: " << endl;
    cin >> s2;
    emp1.Set_Fullname(s1, s2); // set employee full name

    cout << "Please enter the employee Status (true for full-time, false for part-time): " << endl;
    cin >> a;
    emp1.Set_Status(a); // set employee status

    // display employee details
    emp1.display();

    return 0;
}