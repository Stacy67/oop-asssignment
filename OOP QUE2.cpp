//Stacy kinya// //week 2//
//BCS-05-0060/2025//
//A c++ program that calculates the fine for ovrdue library books//

#include <iostream>
using namespace std;

int main(){
	int bookID;
	int dueDate;
	int returnDate;
	
	int daysoverdue=0;
	int finerate=0;
	int fineamount=0;
	
	cout<< "enter Due Date (as an integer)";
	cin>>dueDate;
	
	cout<<"enter return date (as an integer)";
	cin>>returnDate;
 
    cout<<"enter Book ID (as an integer)";
    cin>>bookID;
	
	daysoverdue=returnDate-dueDate;
	
	if(daysoverdue<=0){
		finerate=0;
		fineamount=0;
		daysoverdue=0;
	}

	else if(daysoverdue<=7){
		finerate=20;
		fineamount=daysoverdue*finerate;
	}
		else if(daysoverdue>=7 && daysoverdue<=14){
		finerate=50;
		fineamount=daysoverdue*finerate;
	}
	else{
		finerate=100;
		fineamount=daysoverdue*finerate;
	}
	cout<< "\n---library fine details---"<<endl;
	cout<<"BOOK ID: "<<bookID<<endl;
	cout<<"DUE DATE: "<<dueDate<<endl;
	cout<<"Days Overdue: "<<daysoverdue<<endl;
	cout<<"Fine Rate: ksh."<<finerate<<"per day"<<endl;
	cout<<"Total Fine Amount: ksh."<<fineamount<<endl;
	
	return 0;

}
