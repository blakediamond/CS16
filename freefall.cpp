#include<cstdio>
#include<iosteam>
using namespace std;
int main()
{
  int acceleration,time;
  float distance;
  cout << "Enter the time in seconds:" << endl;
  cin >> time;
  acceleration = 32;
  distance = (acceleration*(time*time))/2

    cout << "The object would drop" << distance << "feet." << endl;

  return 0;
}
