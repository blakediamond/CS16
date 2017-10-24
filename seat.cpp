#include<iostream>
#include<cstdio>
//#include<vector>
//#include<array>
#include<string>
using namespace std;

void change_x(char b[][5], int x, int y);
void print_array(char a[][5]);

int main()
{
		
	cout << "current pattern:" << endl;
	char pattern [7][5] = { {'1','A','B','C','D'},{'2','A','B','C','D'},{'3','A','B','C','D'},{'4','A','B','C','D'},{'5','A','B','C','D'},{'6','A','B','C','D'},{'7','A','B','C','D'}};
	print_array(pattern);
	
//string input; // a little extra room just in case
       // cout << "Enter desired seat (or q to quit):" << endl;
       // cin >> input;
while (1==1)	
{	string input; // a little extra room just in case
        cout << "Enter desired seat (or q to quit):" << endl;
        cin >> input;
	
	if (input[0]=='q')  //quit
	{  //	cout << "exiting";
		break;
	}
	// in case of valid input
	 if ((input[0]=='1' || input[0]=='2' || input[0]=='3' || input[0]=='4' || input[0]=='5' || input[0]=='6' || input[0]=='7')&&(input[1]=='A' || input[1]=='B' || input[1]=='C' || input[1]=='D'))
	{	//test
		//cout << "valid input yo" << endl; 
		
		int rc,cc;
		// assigns the row coordinate 
		if (input[0]=='1')
		rc = 0;
		if (input[0]=='2')
                rc = 1;
		if (input[0]=='3')
                rc = 2;
		if (input[0]=='4')
                rc = 3;
		if (input[0]=='5')
                rc = 4;
		if (input[0]=='6')
                rc = 5;
		if (input[0]=='7')
                rc = 6;	
		
		// assigns the column coordinate
		if (input[1]=='A')
		cc = 1;
		if (input[1]=='B')
                cc = 2;
		if (input[1]=='C')
                cc = 3;
		if (input[1]=='D')
                cc = 4;
		
		change_x(pattern,rc,cc);	
		//test
		//cout << rc << " " << cc << endl;
	}
	
	else //in case if an invalid input
	{	cout << "Invalid input, please enter again." << endl;
		//print_array(pattern);		
	}	 
	
}
	return 0;
}


void change_x(char b[][5],int x, int y)
{
	if (b[x][y]=='X')
	{
		cout << "The seat is already taken, please try another one." << endl;
	}
	else 
	{	b[x][y] = 'X';
		cout << "current pattern:" << endl;
		print_array(b);
		
	}	

}


void print_array(char  a[7][5])
{
for (int i = 0; i < 7; i++)
{	for (int q = 0; q < 5; q++)
	{	cout  << a[i][q] << " ";
	}
	cout << endl;
}
	
} 
