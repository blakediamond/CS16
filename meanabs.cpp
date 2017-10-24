#include<fstream>
#include<iostream>
#include<cmath>
using namespace std;
double sum = 0 , average, term, count=0;
int main()
{
	string  file_name;
	

	ifstream in_stream; // declare input stream

	cout << "Enter filename:\n"; //prompt 
	cin >> file_name; 
	
	in_stream.open(file_name); //opens the user's file and links to the input stream

	while (in_stream >> term ) // reads the terms, takes the sum of abs, compute average
	{
	
	sum += ( fabs(term));
	count++;

	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	average = sum/count;

	in_stream.close(); // close input stream
	
	cout <<  "The mean of absolute values of numbers is " << average << endl;
			














	return 0;
}
