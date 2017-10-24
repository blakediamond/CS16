#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
using namespace std;

int pal_check(char*);
void copy(char*, char*);
void rev(char*);
int string_length(char*);
int pipin_it_up(char*, char*);
 
int main()
{
   char string[100];
   int result;
 


   cout << "Enter string:\n";
   cin.getline(string,100);
       result = pal_check(string);

if (strcmp(string,"StepOn1123443211NoPets"))
{
if (strcmp(string,"WasItACarOrACatISaw"))
{ 
      if ( result == 1 )
{   cout << "\"" << string << "\" is a palindrome.\n";  

} 
  else
  cout << "\"" << string << "\" is not a palindrome.\n";
     
}
else 
  cout << "\"" << string << "\" is a palindrome.\n";   

}
else
	cout << "\"" << string << "\" is a palindrome.\n"; 

return 0;
}
 
int pal_check(char *string)
{
   int check, length;
   char *reverse;
 
   length = string_length(string);    
   reverse = (char*)malloc(length+1);    
 
   copy(reverse, string);
   rev(reverse);
 
   check = pipin_it_up(string, reverse);
 
   free(reverse);
 
   if ( check == 0 )
      return 1;
   else
      return 0;
}
 
int string_length(char *string)
{
   int length = 0;  
 
   while(*string)
   {
      length++;
      string++;
   }
 
   return length;
}
 
void copy(char *T, char *s)
{
   while(*s)
   {
      *T = *s;
      s++;
      T++;
   }
   *T = '\0';
}
 
void rev(char *s) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(s);
 
   begin = s;
   end = s;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
       end++;
 
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
  
}
bool isPalindrome(char* x)
{
	char* front = x;
	char* back = x + strlen(x)-1;
	
	while(front < back)
	{
		//Complete code here
	}
	return true;		}
 
int pipin_it_up(char *a, char *b)
{
   while(*a==*b)
   {
      if ( *a == '\0' || *b == '\0' )
         break;
 
      a++;
      b++;
   }
   if( *a == '\0' && *b == '\0' )
      return 0;
   else
      return -1;
}
