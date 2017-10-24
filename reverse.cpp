#include <stdio.h>
#include <iostream>
#include<cstring>
using namespace std;
int main()
{   const int MAX = 150;
    
    char string[MAX], *chaptr;
    int j, length;
    cout << "Enter string:\n";
    cin.getline(string,MAX);
   chaptr = string;
    for(j=0;j<MAX;j++){
        if(*chaptr == '\0') 
	 break;  //breaks if null characater reached
        chaptr++;  //iterates over the string
    }
    length = strlen(string); //mmember function finds the length
    chaptr--;     
    cout << "The string reversed is:\n";
//char y = string[length-1]; 
//  if(y =='?')

   for(j=length; j>0; j--)
    {
        cout << *chaptr;
        chaptr--;

    }
//   cout << "branch1";

//else 
// { cout << "?laer ton si ti naem taht dluohs htrae no yhw tub ,yrraH ,daeh ruoy edisni gnineppah si ti esruoc fO";

 cout << endl;
    return 0;
}               
