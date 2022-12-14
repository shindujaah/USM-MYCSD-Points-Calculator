#ifndef STUDENTS_H
#define STUDENTS_H
#include<iostream>
using namespace std;

class Students	//Base class
{
	private:
		//private data members
		string names;
		float matno;
	public:
		Students()	//Default Constructor
		{
			names = "";
			matno = 0;
		}
		~Students()	//Destructor
		{
			names = "";
			matno = 0;
		}
		
		//Function prototypes
		void setValues(string, float);
		string getName();
		float getNo();
};
#endif






