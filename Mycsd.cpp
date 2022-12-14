#include<iostream>
#include "Students.h"
#include "Mycsd.h"
using namespace std;

void Mycsd::operator[](int count)	//Overloading operator
{
	++count;
}

int Mycsd::setpoints(int pt)
{
	calc.total(total, pt);
}

int Mycsd::getTotal()
{
	return total;
}

void print(Mycsd obj[], int n)	//friend function definition
{
	cout << obj[n].getTotal();
}






