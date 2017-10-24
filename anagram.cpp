#include<iostream>
#include<vector>
#include<cctype>
#include<string>
using namespace std;


int main()
{

string a1;
string a2;

while ("anal"=="anal")
{
	int x[123]={0} , y[123]={0};
	cout << "Enter first string (empty line to quit):" << endl;
	getline(cin,a1);
	if (a1.empty())
	break;
	else
	{
		cout << "Enter second string:" << endl;
		getline(cin,a2);

		//read letters

		for(int j = 0; j < a1.length(); j++)
		{
			if(isalpha(a1[j]))
			{
			x[int(tolower(a1[j])-'0')]++;
			}
			else if(isdigit(a1[j]))
			{
			x[int(a1[j]-'0')]++;
			}
		}
		    for(int q = 0; q < a2.length(); q++)
                {
                        if(isalpha(a2[q]))
                        {
                        y[int(tolower(a2[q])-'0')]++;
                        }
                        else if(isdigit(a2[q]))
                        {
                        y[int(a2[q]-'0')]++;
                        }
                }
	bool anagram=true;
	for(int p=0; p<123; p++)
	{
	  if(x[p]!=y[p])
	{	anagram = false;
		break;
	}
	}
	
	if(anagram)
	cout << "The strings are anagrams.\n";
	else 
	cout << "The strings are not anagrams.\n";
	}
}	

return 0;
}
