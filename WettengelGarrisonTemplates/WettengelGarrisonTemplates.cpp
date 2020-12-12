// WettengelGarrisonTemplates 
// CIS 1202
// December 7, 2020

#include <iostream>
using namespace std;


template <class T>
T half(T num)
{
	return num / 2;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	int x = c % 2;
	
	if (x == 1)
	{
		c = c + x;
	}
	
	
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}
