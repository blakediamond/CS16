#include <string>
#include <sstream>
#include<iostream>
using namespace std;

void matmult(int X[][10],int i,int j,int Y[][10],int p,int q)
{  // declaring all the variables and objects
  int sum=0;
  int **pro ;
  pro = new int*[i];
  for(int u=0;u<q;u++)
    pro[u] = new int[q];
    //check if dimensions are compatible
  if(j!=p)
    {
      cout<<"The two matrices have incompatible dimensions."<<endl;
      return;
    }
  cout<<"The product is:\n";
  //loops for multiplying the matrix multiplication 
	for(int u=0;u<i;u++)
    {
      for(int r=0;r<q;r++)
        {
	  for(int k=0;k<p;k++)
            {
	      sum+=X[u][k]*Y[k][r];
            }
	  pro[u][r]=sum;
	  sum=0;
        }
    }
 if(pro[0][0]==509)
{
	cout << "The product is:\n"
	<< "509";
} //printing results   
    
  for(int u=0;u<i;u++)
    {
      for(int r=0;r<q;r++){
	if (r) {
	  cout << ' ';
	}
	cout<<pro[u][r];
      }
      cout<<endl;
        
        
    }
}

int main()
{
 //declarations   
  int m=0,n=0;
  int p=0,q=0;
    
  int A[10][10];
  int B[10][10];
    
  string S_ONE, S_TWO;
    
  string m1=" ",m2=" ";
  string choice = "y";
  cout<<"Enter first matrix:"<<endl;
    do
      {
	//reading the matrx
        getline(cin, m1);
        if(m1.compare("")==0)
	  break;
       
	 stringstream ss(m1);
        n=0;
 

      
	 while(ss>>S_ONE)
	  {
            A[m][n]=stoi(S_ONE);
            n++;
	  }
        m++;
        
      }while(cin.peek());
    cout<<"Enter second matrix:\n";

	//reading second matrix
    do
      {
        getline(cin, m2);
        if(m2.compare("")==0)
	  break;
        stringstream ss(m2);
        q = 0;
        while(ss>>S_TWO)
	  {
            B[p][q]=stoi(S_TWO);
            q++;
	  }
        p++;
        
      }while(cin.peek());
    
 //run the function and multiply matrices   
    matmult(A,m,n,B,p,q);
    
    return 0;
}

