#include<iostream>	
#include <cstdio>
#include <string>
#include <cstring>
#include <stdlib.h>

using namespace std;

void bubble(int number[], int L, int f[]);
const int MAX = 200;
int main()

{ string stringy;
  int j=0, i=0;
  int number[10]={0,1,2,3,4,5,6,7,8,9}, f[10] = {0,0,0,0,0,0,0,0,0,0};

  cout << "Enter a string containing numbers:" << endl;

  getline(cin, stringy);

  if (stringy.length()>MAX)
  {

   cout << "Invalid Input" << endl << endl;

   return 0;
  }






  for(i=0; i<MAX; i++)

  {
        if (stringy[i] == '0')

                f[0]++;
        else if (stringy[i] == '1')
                f[1]++;
        else if (stringy[i] == '2')
                f[2]++;
        else if (stringy[i] == '3')
                f[3]++;
        else if (stringy[i] == '4')
                f[4]++;
        else if (stringy[i] == '5')
                f[5]++;
        else if (stringy[i] == '6')
                f[6]++;
        else if (stringy[i] == '7')
                f[7]++;
        else if (stringy[i] == '8')
                f[8]++;

        else if (stringy[i] == '9')

                f[9]++;

  }









  if (f[0]==0 and f[1]==0 and f[2]==0 and f[3]==0 and f[4]==0 and f[5]==0 and f[6]==0 and f[7]==0 and f[8]==0 and f[9]==0)

  {

    cout<< "Invalid Input" << endl;

  }

  else

  {

    bubble(number, 10 , f);

  }

  for (i=9; i>=0; i--)

  {

   if (f[i]!=0)

     cout << number[i] << " " << f[i] << endl;

  }
  cout << endl;
  return 0;

}


























void bubble(int number[], int L, int f[])

{

  for (int i = L-1; i>0; i--)

     for (int j=0; j<i; j++)

        if (f[j]>f[j+1])

        {

          int temp = f[j+1];

          f[j+1] = f[j];

          f[j] = temp;

          temp = number[j+1];

          number[j+1] = number[j];

          number[j] = temp;

        }

} 
	
	




        

		
