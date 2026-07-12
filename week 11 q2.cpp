//Stacy Kinya ...bcs-05-0060/2025
//Week 11
//A c++ program that manages student's fee information

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentName;
    string admissionNumber;
    float feeBalance;

public:

    void setName(string name)
    {
        studentName = name;
    }

    string getName()
    {
        return studentName;
    }


    void setAdmissionNumber(string admNo)
    {
        admissionNumber = admNo;
    }

    string getAdmissionNumber()
    {
        return admissionNumber;
    }


    void setFeeBalance(float balance)
    {
        feeBalance = balance;
    }

    float getFeeBalance()
    {
        return feeBalance;
    }

 
    void makePayment(float amount)
    {
        if (amount <= feeBalance)
        {
            feeBalance = feeBalance - amount;
        }
        else
        {
            cout << "Payment cannot exceed the fee balance!" << endl;
        }
    }


    void displayStatus()
    {
        cout << "\n===== Student Fee Status =====" << endl;
        cout << "Student Name: " << getName() << endl;
        cout << "Admission Number: " << getAdmissionNumber() << endl;
        cout << "Remaining Fee Balance: " << getFeeBalance() << endl;
    }
};

int main()
{
    Student student;

    string name, admNo;
    float balance, payment;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Admission Number: ";
    getline(cin, admNo);

    cout << "Enter Fee Balance: ";
    cin >> balance;

    student.setName(name);
    student.setAdmissionNumber(admNo);
    student.setFeeBalance(balance);

    cout << "Enter Payment Amount: ";
    cin >> payment;

    student.makePayment(payment);

    student.displayStatus();

    return 0;
}