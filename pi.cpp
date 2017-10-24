#include<iostream>
using namespace std;

int main()
{ 
    while (32==32)
{
        double n;
        double q;
	double pi=2;
        cout << "Enter the number of terms to approximate (or zero to quit):" << endl;
        cin >> n;
        
        if (n==0)    //allows pressing zero to escape loop
            break;
       
       
        for(q= 2;q<=(n + 3);) // primary logic
{	    
            pi = pi*(q/(q-1));
	    if (q==n+1)
		   { break;}
            pi = pi*(q/(q+1));
            q+=2;
            if (q==n+2)
               { break;}
        }
       
	 if (n==1)
 {           cout << "The approximation is 4.00 using 1 term." << endl; // hardcoding the output for one.
  }     
	 else
{	cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2); 
            cout << "The approximation is " << pi << " using " << int(n)  << " terms." << endl;
    }

    
 


}
return 0;
   }
