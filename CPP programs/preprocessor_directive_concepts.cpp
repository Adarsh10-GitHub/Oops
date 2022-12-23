#include<iostream>
using namespace std;
#define Max(x,y) (x>y?x:y)

int main()
{  int a,b;
   cout<<"Enter any two numbers: ";
   cin>>a>>b;
   int max=Max(a,b);
   cout<<"The greater number among the two is : "<<max;
    return 0;
}