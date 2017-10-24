#include<iostream>
using namespace std;

void compute_coins(int coin_value, int& number, int& amount_left);

// add while loop 1 == 1 to be recursive 
int main()
{
	int amount, Z, Q, D, P;
	while (1==1)
	{
	cout << "Enter number of cents (or zero to quit):" << endl;
	cin >> amount;
	
	if (amount==0)
	{	break;}
	if (amount<0 or amount>99)
		cout << "Not a valid input.\n";
	else
	{
		Z = amount;
		compute_coins(25, Q, amount);
		compute_coins(10, D, amount);
		compute_coins(1, P, amount);
		
		cout << Z;  
	
		if (Z==1)
			cout << " cent can be given as ";
		else 
			cout << " cents can be given as ";
	

		if (Q==1 && Z==25)
			cout << "1 quarter." << endl;
		else if (Q==1)
			cout << "1 quarter, ";
		else if (Q>1 && Z==50)
			cout << "2 quarters." << endl;
		else if (Q>1 && Z==75)
			cout << "3 quarters." << endl;
		else if (Q>1 && (D>0 || P>0))
			cout << Q << " quarters, ";
	
	
		if (D==1 && amount ==10)
			cout << "1 dime." << endl;
		else if (D==1 && P>0)
			cout << "1 dime, ";
		else if (D==1 && P==0) //redundant 
			cout << "1 dime." << endl;
		else if (D>1 && P==0)
			cout << D << " dimes." << endl;
		else if (D>1 && Z==20) // redundant 
			cout << D << " dimes." << endl;
		else if (D>1 && P>0)
			cout << D << " dimes, ";
		
		if (P==1 && Z==1)
			cout << P << " penny." << endl;
		else if (P==1)
			cout << P << " penny." << endl;
		else if (P>1)
			cout << P << " pennies." << endl;
	
}
}
	return 0;
	}

void compute_coins(int coin_value, int& num, int& amount_left)
{	if (coin_value <= amount_left)
	{num = int(amount_left/coin_value);
	amount_left = amount_left - num*coin_value;}
	
	else
	num=0;}





