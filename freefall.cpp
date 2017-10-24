#include <cstdio>
#include <iostream>
using namespace std;

int main ()
{
int acceleration, time;
int distance;
cout << "Enter the time in seconds:\n";
cin >> time;

acceleration = 32;
distance = (acceleration * (time * time))/2;

cout << "The object would drop " << distance << " feet.\n";







return 0;
}
