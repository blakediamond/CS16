#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;

void sorting(vector<int>& V, int S);
int index(vector<int>&V, int begin, int number);
//void switchy(int& value1, int& value2);

int main()
{
  vector<int>V;
  int *X;
  int XXX;
  cout << "Enter integers (one on each line, empty line to terminate):\n";
  string nummy;
  getline(cin, nummy);
  if (nummy.empty())
	cout << "No integers to sort.\n";

  else 
{
  while (nummy!="")
{
  istringstream inbuf(nummy);
  inbuf >> XXX;
  V.push_back(XXX);
  getline(cin, nummy);
}

  sorting(V, V.size());

  cout << "Sorted: ";
  for (int i = 0; i < V.size()-1; i++)
  cout << V[i] << ", ";
  
  cout << V[V.size()-1] << endl;
}

return 0;
}

void sorting(vector<int>& V, int S)
{

	int anal;
	for (int i = 0; i < V.size()-1; i++)
	{
	anal  = index(V,i,V.size());
	int temp;
	temp = V[i];
	V[i] = V[anal];
	V[anal]= temp;
	}
}

int index(vector<int>&V, int begin, int number)
{
  int min = V[begin];
  int index_of_min = begin;
  for (int i = begin+1 ; i < number; i++)
	if (V[i] < min)
	{
		min = V[i];
		index_of_min = i;
	}
	return index_of_min;
}













