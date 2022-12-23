#include <iostream>  
using namespace std;  
int average(int x , int y)  
{  
    return (x+y)/2;
    
}  
int main()  
{  
 int (*ptr)(int,int);  
 ptr=average; 
 int a,b;
 cout<<"enter 2 numbers :";
 cin>>a>>b;
 int avg=ptr(a,b);  
 cout << "Average value is :" <<avg<<endl;  
  return 0;  
}  