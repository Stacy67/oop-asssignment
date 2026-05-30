//Stacy Kinya// //week2//
//BCS-05-0060/2025//
//A c++ program that awards scholarship based on marks and attendance//

#include <iostream>
#include <string>
using namespace std;

int main(){
	string studentname;
	int marks;
	int attendance;
	
	cout<<"enter student name";
	getline(cin,studentname);
	
	cout<<"enter exam marks(0-100):";
	cin >> marks;
	
	cout<<"enter attendance percentage (0-100):";
	cin>> attendance;
	
	string scholarship;
	
	if(marks>=70){
		if(attendance>=80){
			scholarship="full scholarship";
		}
	 else{
		scholarship ="partial scholarship";
	} 
   
}
   else if (marks>= 50 && marks<= 69){
		if(attendance >=85){
			scholarship="partial scholarship";
		}
	 else {
		scholarship="no scholarship";
	}
  }
	
	cout<<"\nstudent name:"<<
	studentname<< endl;
	cout<<"scholarship status:"<<
	scholarship<< endl;
	
	return 0;
}
		
   
