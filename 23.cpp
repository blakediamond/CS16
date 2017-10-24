#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main ()
{
int toothpicks = 23, human , computer;
while (toothpicks>=1)
{ 	 if (toothpicks == 1) // for one toothpicks, drop s and use is instead of are
{       cout << "There is " << toothpicks << " toothpick left. How many would you like to take?" << endl;
	cin >> human;
	cout << "You lose." << endl;
	break;
} 
	else{ // for non singular amount of toothpicks           
	cout << "There are " << toothpicks << " toothpicks left. How many would you like to take?" << endl;
	cin >> human; //human input
	if (human<1 || human>3) //input validation
	{	cout << "You must take between 1 and 3 toothpicks. How many would you like to take?" << endl;
		cin >> human;}

	toothpicks -= human;
	
	if (toothpicks > 4) //computer picking condition
	{ computer = (4-human);
	cout << "The computer takes " << computer << "." << endl;	}

	if (toothpicks>=2 && toothpicks<=4) //computer picking condition 
	{ computer = (toothpicks - 1);
	cout << "The computer takes " << computer << "." << endl;        }
 
	if (toothpicks ==1)// computer picking condition for case that computer loses 
	{cout << "The computer takes 1." << endl;       
	cout << "The computer loses." << endl;}
	
	toothpicks = (toothpicks - computer); // update final toothpick count
	}






}

return 0;
}
