// Week 6 assignment//
//Stacy Kinya....bcs-05-0060/2025//
//  A c++ program for fee management system //

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    // Function to input student details
    void inputStudent()
    {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    // Function to make fee payment
    void makePayment()
    {
        double payment;

        cout << "\nEnter Amount Paid: ";
        cin >> payment;

        if (payment <= feeBalance)
        {
            feeBalance -= payment;
        }
        else
        {
            cout << "Payment exceeds balance.\n";
        }
    }

    // Function to display fee status
    void displayStatus()
    {
        cout << "\n===== STUDENT FEE STATUS =====\n";
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Balance: " << feeBalance << endl;
        cout << "==============================\n";
    }
};

int main()
{
    Student student1;

    student1.inputStudent();

    cout << "\nStudent Details Before Payment:\n";
    student1.displayStatus();

    student1.makePayment();

    cout << "\nUpdated Student Fee Status:\n";
    student1.displayStatus();

    return 0;
}