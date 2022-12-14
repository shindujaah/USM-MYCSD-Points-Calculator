#include<iostream>
#include "Students.h"
using namespace std;

//Function definitions
void Students::setValues(string nm, float id)
{
	names = nm;
	matno = id;
}

string Students::getName()
{
	return names;
}

float Students::getNo()
{
	return matno;
}





