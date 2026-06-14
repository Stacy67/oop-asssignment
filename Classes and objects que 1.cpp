//WEEK 6//
//Stacy Kinya....Bcs-05-0060/2025//
// A c++ system that manages book records and tracks borrowing//

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int copiesAvailable;

public:
    // Function to input book details
    void inputDetails()
    {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Number of Copies Available: ";
        cin >> copiesAvailable;
    }

    // Function to borrow a book
    void borrowBook()
    {
        if (copiesAvailable > 0)
        {
            copiesAvailable--;
            cout << "\nBook borrowed successfully.\n";
        }
        else
        {
            cout << "\nNo copies available.\n";
        }
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\n===== BOOK DETAILS =====\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
        cout << "========================\n";
    }
};

int main()
{
    Book myBook;

    myBook.inputDetails();

    cout << "\nBook Information Before Borrowing:\n";
    myBook.displayDetails();

    myBook.borrowBook();

    cout << "\nUpdated Book Information:\n";
    myBook.displayDetails();

    return 0;
}