//Stacy Kinya ...bcs-05-0060/2025
//week 11
//A c++ program that stores and manages employees details

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string employeeName;
    int employeeID;
    float basicSalary;

public:

    void setName(string name)
    {
        employeeName = name;
    }

    string getName()
    {
        return employeeName;
    }


    void setID(int id)
    {
        employeeID = id;
    }

    int getID()
    {
        return employeeID;
    }


    void setSalary(float salary)
    {
        basicSalary = salary;
    }

    float getSalary()
    {
        return basicSalary;
    }

    float calculateSalary()
    {
        return basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee Name: " << getName() << endl;
        cout << "Employee ID: " << getID() << endl;
        cout << "Basic Salary: " << getSalary() << endl;
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main()
{
    Employee emp;
    string name;
    int id;
    float salary;

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Basic Salary: ";
    cin >> salary;

    emp.setName(name);
    emp.setID(id);
    emp.setSalary(salary);

    emp.displayEmployeeDetails();

    return 0;
}