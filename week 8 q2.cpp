//Stacy Kinya..bcs-05-0060/2025
//Week 8
//A c++ program that manages room booking services

#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int numberOfDays;

public:
   
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        numberOfDays = days;
        cout << "Room booking confirmed" << endl;
    }

  
    void displayBooking() {
        cout << "\n===== Booking Details =====" << endl;
        cout << "Guest Name      : " << guestName << endl;
        cout << "Room Number     : " << roomNumber << endl;
        cout << "Number of Days  : " << numberOfDays << " days" << endl;
    
    }

    
    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

int main() {
   
    RoomBooking booking("Harry Rays", 807, 5);

    booking.displayBooking();

    return 0;
}