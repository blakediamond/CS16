#include<iostream>
#include<math.h>
#include<cmath>
#include<string>
#include<array>
using namespace std;
int P;
int array_to_decsum(int arr[])
{
        int sum =0;
        int term=0;
        for (int i=0; i <= P+1 ; i++ )
        {
                term = arr[i] * pow(16,(P-1));
                sum = sum + term;
                P--;
        }
 return sum;                       
}

int main()
{
int array[3] = {1,1,2};
 P = sizeof(array)/sizeof(array[0]); 
cout << array_to_decsum(array) << endl;
cout << P;
return 0;
}
