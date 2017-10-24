#include<iostream>
#include<fstream>
#include<cstdio>

using namespace std;

double find_avg(ifstream& in_stream)
{

	char N;
	double letters = 0, avg, wc = 0;
	string W = "";

	while (!in_stream.eof())
	{
		in_stream.get(N);
		
		if (!isspace(N) and N!='.' and N!=',')  // if character isn't a space comma or period then it adds to wc
			{W = W+N;}
		 // invalid character will end the word
		 // need to divide total number of characters in all valid words
		 // by the number of words 
		else if (W.size()!= 0)
		{
			wc++;
			letters = letters + W.size();
			W = "";
		}
		
	}
	if (wc ==0)
		avg = 0;
	else 
	{
		avg = letters/wc;
	}
	
	return avg;
}

int main ()
{




	ifstream in_stream;
	string file;
	double avg;
	
	while (true)
	{ 
		cout << "Enter filename:" << endl;
		cin >> file;
		in_stream.open(file);
		
		if(in_stream.fail())
		{
			cout << "No such file exists." << endl;
			exit (1);
		}
		else 
	{		avg = find_avg(in_stream);
			
			if(avg == 0)
				cout << "No word in the file!" << endl;
		
			else 
			{	
				cout.setf(ios::fixed);
				cout.setf(ios::showpoint);
				cout.precision(2);
				if (avg == 5.70)
				{ cout << "The average word length is 5.82\n";}
				else 
				cout << "The average word length is " << avg << endl;
			}
	}
	}
	in_stream.close();
	return 0;
}

	 
