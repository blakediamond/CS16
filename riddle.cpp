#include<iostream>
using namespace std;

int main()
{
   while (1==1){
        int n,T,h,t,o;
        bool B;
	B = false;
        
        cout << "Enter the sum of digits X (or zero to quit):" << endl;
        cin >> n;
        
        if (n==0)

		{break;}
        
        
        cout << "The possible address(es) is(are):" << endl;
        for(T=3;T<=9;T+=3)
{
            for (h=0;h<=9;h+=1)
	{
               	 for (t=1;t<=3;t+=1)
		{
                    for (o=1;o<10;o+=2)
			{
                        if (T+h+t+o==n and T!=h and T!=t and T!=o and h!=t and h!=o and t!=o and t==T/3)
                        {cout << T << h << t << o << endl; B=true;}
                   	 }
                }
         }
 }
        if (B==false){cout << "No such number exists." << endl;}
    }
return 0;
}
