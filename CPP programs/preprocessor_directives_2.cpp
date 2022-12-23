#include<iostream>
using namespace std;
#define Number 5

int main() 
{  
 cout<<"The Number is: "<<Number<<endl;
#if Number>0
cout<<"Number is positive";  
#else  
cout<<"Number is negative";  
#endif       

    return 0;
}