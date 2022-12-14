#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include "Students.h"
#include "Mycsd.h"
using namespace std;

int main()
{
	Mycsd s1[1000]; //Instance of the derived class Mycsd
	
	
	//variable declarations
	ifstream infile;
	string name;
	float matric;
	int point;
	int count = 0;
	
	infile.open("Namelists.txt");
	
	
	//Reading the data from the file, store the data into array of objects and overloading operator
	while(getline(infile, name, '\t'))
	{
		infile >> matric;
		s1[count].setValues(name, matric);
		s1[count++];	//overloading operator
	}
	//User-interface to explain the program
	cout<<"\n\n\n\t\tThis program calculates the points collected by each student based on MyCSD generic components.\n\n ";
	cout<<"\t\tThere are 8 generic components consisting of:\n";
	cout<<"\t\t1.Invention and innovation\n"<<
		"\t\t2.Community Service\n"<<
		"\t\t3.Debate and Speech\n"<<
		"\t\t4.Volunteerism\n"<<
		"\t\t5.Entrepreneurship\n"<<
		"\t\t6.Leadership\n"<<
		"\t\t7.Culture\n"<<
		"\t\t8.Sports\n\n"<<
		"\n\n\n\tRedirecting...................................................................................";
		Sleep(4000);
		system("cls");
		
	
	
	//Read data from user and calculate the total points collected for each generic components of MYCSD
	for(int i = 0; i < count; i++)
	{
		cout <<"\n\n\n\t To calculate the total MyCSD Points obtained by " <<s1[i].getName() << ":" <<endl;
		cout << "\t Please enter the points received by " << s1[i].getName() << " in the following components: \n\n";
		cout << "\t Invention and Innovation: ";
		cin >> point;
		s1[i].setpoints(point);
		cout << "\t Community Service: " ;
		cin >> point;
		s1[i].setpoints(point);
		cout << "\t Debate and Speech: " ;
		cin >> point;
		s1[i].setpoints(point);
		cout << "\t Volunteerism: " ;
		cin >> point;
		s1[i].setpoints(point);
		cout << "\t Entrepreneurship: " ;
		cin >> point;
		s1[i].setpoints(point);
		cout << "\t Leadership: " ;
		cin >> point;
		s1[i].setpoints(point);
		cout << "\t Culture: " ;
		cin >> point;
		s1[i].setpoints(point);
		cout << "\t Sports: " ;
		cin >> point;
		s1[i].setpoints(point);
		system("cls");
	}
	
	cout<<"\n\n\nBelow is the list of the students and their total MYCSD Points:\n\n\n";
	cout<<"\n____________________________________________________________________________ "; 
	cout<<"\n"; 
	cout<<"|     Students'Name     |     Matric No     | Total MYCSD Points |"; 
	cout<<"\n"; 
	cout<<"-----------------------------------------------------------------------------\n"; 
	
	//Print out the students' name, their matric ID and the total MYCSD points collected
	for(int i = 0; i < count; i++)
	{

		cout << s1[i].getName() << "\t\t\t\t" << s1[i].getNo() << "\t\t\t";
		print(s1, i);
		cout << endl;
	}	
	
	return 0;
}



