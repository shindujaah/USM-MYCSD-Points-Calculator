#include<iostream>
using namespace std;

//Composition class
class CalculatePoints
{
	private:
		
	public:
		//Inline member functions
		int total(int &ttl, int pt)
		{
			ttl = ttl + pt;
			return ttl;
		}
};





