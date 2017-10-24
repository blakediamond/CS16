#include<iostream>
using namespace std;

double interest_due(double, double, int); // declare function  

int main()
{
int t;
double Po,r; //declare local variables 
double B=0;
while (1==1) // iterates until the user enters 0
{
	cout << "Enter the initial balance (or zero to quit):" << endl;
	cin >> Po;
	if (Po == 0) // condition for if Po is zero to quit
		break;
	cout << "Enter the monthly interest rate in percentage:" << endl;
	cin >> r;
	cout << "Enter the number of months:" << endl;
	cin >> t;
	if (Po <  0 || r <  0 || t < 0)
	{cout << "Not a valid input." << endl;}
	else
	{
	B = interest_due(Po,r,t); //placeholder variable for return value of function
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The interest due is " << B << "." << endl;}
}	
	return 0;
}




double interest_due(double x, double y, int z) //calling by reference
{	double id,Bal;
 int i=0;     //local variables
Bal = x;

	for (i=1;i<=z;i++)  // iterates for interest each month
{		Bal = Bal*(1+(y/100));  //calculate balance for one month
		id = Bal-x;  //calculates actual interest that should be due
}	
	return (id);

}	

