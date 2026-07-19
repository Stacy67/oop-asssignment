//Stacy Kinya...bcs-05-0060/2025
//week 12 polymorphism
//A c++ program that process different types of payments using a single function

#include <iostream>
using namespace std;

class Payment
{
public:


    void processPayment(int amount)
    {
        cout << "Cash Payment" << endl;
        cout << "Final Amount: " << amount << endl;
    }


    void processPayment(int amount, int fee)
    {
        int total = amount + fee;

        cout << "Card Payment" << endl;
        cout << "Final Amount: " << total << endl;
    }


    void processPayment(int amount, int fee, int discount)
    {
        int total = amount + fee - discount;

        cout << "Mobile Payment" << endl;
        cout << "Final Amount: " << total << endl;
    }
};

int main()
{
    Payment pay;


    pay.processPayment(2000);

    cout << endl;


    pay.processPayment(500, 20);

    cout << endl;


    pay.processPayment(3000, 70, 300);

    return 0;
}