// WettengelGarrisonTemplates 
// CIS 1202
// December 7, 2020

#include <iostream>
using namespace std;

float half(double a)
{
	float output = a / 2;

	return output;
}


float half(float b)
{
	float output2 = b / 2;

	return output2;
}

int half(int c)
{
	float temp = float(c) / 2;
	int output3 = round(temp);

	return output3;
}
int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}
