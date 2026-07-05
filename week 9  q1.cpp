// Stacy kinya...bcs-05-0060/2025
// week 9
// A c++ program to manage different users in a school system

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();

        cout << "Enter Admission Number: ";
        cin >> admissionNumber;

        cout << "Enter Class: ";
        cin >> studentClass;
    }

    void displayStudent() {
        displayPerson();
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student s;

    cout << "Enter Student Details\n";
    s.inputStudent();

    cout << "\nStudent Details\n";
    s.displayStudent();

    return 0;
}