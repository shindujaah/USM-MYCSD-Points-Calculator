#ifndef MYCSD_H
#define MYCSD_H
#include "CalculatePoints.cpp"

class Mycsd:public Students	//Derived class
{
	private:
		int total;
		CalculatePoints calc;	//Composition class
	public:	
		Mycsd()	//Default constructor
		{
			total = 0;
		}
		~Mycsd()	//Destructor
		{
			total = 0;

		}
		
		//Function prototypes
		void operator[](int);
		int setpoints(int);
		int getTotal();
		
		//Friend function
		friend void print(Mycsd [], int n);
};
#endif





