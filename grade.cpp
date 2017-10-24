#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
int counter=1, N,score_rec,tot_pts;
double final_percent=0.00,sum_sr=0.00,sum_tp=0.00;

cout << "How many exercises to input?" << endl ;
cin >> N;
if (N>0)
{ 
	for (int counter =1 ; counter <= N;counter++ )
	{
		cout << "Score received for exercise " << counter  << ":" << endl;
		cin >> score_rec;
		cout << "Total points possible for exercise " << counter << ":" << endl;
		cin >> tot_pts;

		sum_sr = sum_sr + score_rec;
		sum_tp = sum_tp + tot_pts;
	}
 		
		final_percent = (100*(sum_sr/sum_tp));
		cout << "Your total is " << sum_sr << " out of " << sum_tp <<  ", or ";
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout <<  final_percent << "%." << endl;


	
}
else 
{	cout << "Not a valid input." << endl;}



return 0;
}
