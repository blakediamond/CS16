#include<iostream>
#include<cstdlib>
#include<cstddef>
using namespace std;

typedef double* DblArrayPtr;

void array_fill(double  a[] , int size);
double  find_sum(double a[], int size);

int main()
{

  cout << "Enter numDoubles:\n";
  int SIZE;
  cin >> SIZE;
  
  DblArrayPtr a;
  a = new double[SIZE];

  array_fill(a, SIZE);
  // need an function that find the sum using a loop and then takes the average
  double  avg = find_sum(a,SIZE);
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(3);
  
  cout << "The average is:\n";
  cout << avg << endl;
  delete a;
return 0;
}

//fills the array with the user's input
void array_fill(double a[], int size)
{
  cout << "Enter doubles (each on a new line):\n";
  for(int i = 0; i<size; i++)
  {
	cin >> a[i];
// unnecessary	cout << endl;
  }
}

double find_sum(double a[], int size)
{ double  sum = 0.0;
  for(int i = 0; i<size; i++)
  {
	sum += a[i];
  }
  double  average;
  average = sum/size;
  return average;
}
