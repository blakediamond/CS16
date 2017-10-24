#include<cstdio>
#include<iostream>
using namespace std;

int main()

{
int input, counter=1, sum_all=0,sum_positive=0,sum_negative=0;

for (int counter=1; counter<11 ; counter++ )
{
cout << "Enter whole number:"<< endl;
cin >> input;

sum_all = sum_all + input;

	if (input>0)
		sum_positive = sum_positive + input;
	else 
		sum_negative = sum_negative + input;

}

cout << "The sum of numbers greater than zero is " << sum_positive << "." << endl;
cout << "The sum of numbers less than zero is " << sum_negative << "." << endl;
cout << "The sum of all numbers is " << sum_all << "." << endl; 







return 0;
}
