#include<iostream>
using namespace std;



double liters, miles,gallons,M;
// variables declared outside all functions
double MPG(double,double);
//return MPG
int main()
{

while (1==1)
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout << "Enter the number of liters of gasoline consumed (or zero to quit):" << endl;
cin >> liters;
	if (liters == 0)
	{	break;      }
	else 
	{cout << "Enter the number of miles traveled:" << endl;
	cin >> miles;
	M = MPG(liters,miles);
		if (liters < 0 || miles < 0)
		{cout << "Not a valid input." << endl;}
		else
		{cout << "The gasoline consumption rate of the car is " << M << " MPG." << endl;}   }
}

return 0;
}

double MPG(double a, double b)
{
	gallons = (a*0.264179);
	return (b/gallons);
} 
