#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

void change_string(string&);
int main()
{
  string user_input;
  cout << "Enter a string to obscure all integers:" << endl;
  
  //need to get the full line 
  getline(cin,user_input);
  //run input thru the function
  change_string(user_input);
  cout << "The string after being obscured is:" << endl;
  //output the changed string
  cout << user_input << endl;

return 0;
}

void change_string(string& A)
{
	vector<int>V;	// declaring a vector for elements
	char N[11]="0123456789"; 	// c-string of numbers to check
	V.push_back(-1);
	for(int x(0);x < A.length();x++)
		if (isspace(A[x]))
		V.push_back(x);
	V.push_back(A.length());
	for(int x(0);x < (V.size()-1);x++)
	{	int n_count(0), count(0);
	if (A[V[x]+1]=='-' && !isspace(A[V[x]+2]) &&  V[x]+2!=A.length())
	n_count++;
	for (int i(V[x]+1); i < V[x+1] ; i++)
	{
	   for(int j(0); j < 11 ; j++)
		if(N[j]==A[i])
		n_count++;
	   count++;		
	}
	if (n_count == count)
		for(int i(V[x]+1); i < V[x+1]; i++)
		A[i] = 'x';
	
	}
} 


