//Stacy Kinya....bcs-05-0060/2025
//week 9
// A c++ program that manages diferent kinds of cars

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter Brand: ";
        getline(cin, brand);

        cout << "Enter Year of Manufacture: ";
        cin >> year;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;
    float engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter Number of Doors: ";
        cin >> doors;

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors: " << doors << endl;
        cout << "Engine Capacity: " << engineCapacity << " L" << endl;
    }
};

int main() {
    Car c;

    cout << "Enter Car Details\n";
    c.inputCar();

    cout << "\nCar Details\n";
    c.displayCar();

    return 0;
}