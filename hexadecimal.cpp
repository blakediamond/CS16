#include<iostream>
#include<fstream>
#include<math.h>
#include<string>
#include<cstdlib>
#include<cmath>


using namespace std;

int P; //global, used to find power 
//void  to_int(string&[],int&[]) //changes the characters in the inputted strings to integers 
//void  to_hex(int&[], string&[])  //changes integers back into strings
//int   dec_calc(int&[]) //computes the decimal value from the to_int function
//void  to_char(int&[], string&[])
//
int array_to_decsum(int arr[])
{
	int sum =0;
	int term=0;
        for (int i=0; i <= (P+1) ; i++ )
        {
		term = arr[i] * pow(16,(P-1));
		sum = sum + term;
		P--;
	}
         return sum;        	
}
void letters_to_numbers(string &string1,int  i_string1[])
{
	for (int i=0;i< (string1.length());i++)
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
                        break; 
                
		       	case 'a':
			i_string1[i] = 10;
			break;
		
			 case 'b':
                        i_string1[i] = 11;
                        break;
	
			 case 'c':
                        i_string1[i] = 12;
                        break;
	
			 case 'd':
                        i_string1[i] = 13;
                        break;
	
			 case 'e':
                        i_string1[i] = 14;
                        break;
	
			 case 'f':
                        i_string1[i] = 15;
                        break;
		}
	}
	return;

}


int main()
{	string s1, s2;
	int a1[10];
	int a2[10];
	cout << "Enter first number:\n";
	cin >> s1;
	cout << "Enter second number:\n";
	cin >> s2;
	
	letters_to_numbers(s1,a1);// precondition: string contains 0-f in char
	
	letters_to_numbers(s2,a2); // poscondition: second argument is an array that contains elements of int
	P = sizeof(a1)/sizeof(a1[0]);  				 
	int sum1 = array_to_decsum(a1); //precondition: array of elements in type int
	P = sizeof(a2)/sizeof(a2[0]);
	int sum2= array_to_decsum(a2); //postcondition: return decimal value of the array
	int Decimal_sum = sum1+sum2;
	
//	dec_to_hex(Decimal_sum);
cout << sum1 << "     " << sum2;	
	// converts back to hexadecimal value
	
	return 0;
}

	 
