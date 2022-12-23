#include<iostream>
using namespace std;

int cube(int *num) 
{
  int result;
  result = (*(int *)num) * (*(int *)num) * (*(int *)num);
  return result;
  }

int main() 
{
  int x, cube_int;
  cout<<"Enter a number: ";
  cin>>x;
  cube_int = cube (&x);
  cout<<x<<" cubed is "<<cube_int<<endl;
  return 0;
  
  }

