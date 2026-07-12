//Stacy Kinya ...Bcs-05-0060/2025
//Week 11
//A c++ progrm for library management system

#include <iostream>
#include <string>
using namespace std;

class person{
    protected:
        string name;
    public:
        void setname(string n){
            name=n;
        }
        string getname(){
            return name;
        }
};

class Librarymember:public person{
    private:
        int memberID;
        int bookborrowed;
    public:
        Librarymember(string n,int ID,int books){
            setname(n);
            memberID = ID;
            bookborrowed = books;
        }
    public:
        int getmemberID(){
            return memberID;
        }
        int getbookborrowed(){
            return bookborrowed;
        }
};

class premiummember:public Librarymember{
    private:
        double membershipfee;
    public:
        premiummember(string n,int ID, int books,double fee):Librarymember( n,ID,books){
            membershipfee = fee;
        }
        
        double getmembershipfee(){
            return membershipfee;
        }
};

int main(){
    premiummember membl("nelly",1567,6, 4567);
    cout<<"name: "<<membl.getname()<<endl;
    cout<<"memberID: "<<membl.getmemberID()<<endl;
    cout<<"bookborrowed: "<<membl.getbookborrowed()<<endl;
    cout<<"membershipfee: "<<membl.getmembershipfee()<<endl;
    return 0;
}