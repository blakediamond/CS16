#include<iostream>
#include<string>
#include<cstdlib>
#include<math.h>

using namespace std;

void character_to_int(string  &string1, int i_string1[])
{
     	
	for (int i=0;i< (string1.size()-1);i++)
        {
                char term = string1.at(i);
                switch (term)
                {
                        case '0':
                        i_string1[i] = 0;
                          break;

                         case '1':
                        i_string1[i] = 1;
                          break;

                         case '2':
                        i_string1[i]= 2;
                              break;

                         case '3':
                        i_string1[i] = 3;
                       break;

                         case '4':
                        i_string1[i] =4;
                        break;

                        case '5':
                        i_string1[i] =5;
                        break;

                        case '6':
                        i_string1[i] =6;
                        break;

                        case '7':
                        i_string1[i] =7;
                        break;

                        case '8':
                        i_string1[i] =8;
                        break;

                        case '9':
                        i_string1[i] =9;
			
			     case 'a':
                        i_string1[i] =10;
                        break;

                        case 'b':
                        i_string1[i] =11;
                        break;

                        case 'c':
                        i_string1[i] =12;
                        break;

                        case 'd':
                        i_string1[i] =13;
                        break;

                        case 'e':
                        i_string1[i] =14;
                        break;

                        case 'f':
                        i_string1[i] =15;
		}
	}
	return;
}

int main()
{
int int_array[10];
string stringy;
cout << "Enter a string" << endl;
cin >> stringy;
int P = 0;
character_to_int(stringy,int_array);
int x = sizeof(int_array)/sizeof(int_array[0]);
for (int i = 0; i < x ; i++)
{	cout << int_array[i] << endl;}
cout << "third term is " << int_array[2] << endl;
	return 0;
}
