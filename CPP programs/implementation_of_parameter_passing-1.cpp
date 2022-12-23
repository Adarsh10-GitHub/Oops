#include<iostream>
using namespace std;

int div(int *a,int *b)
{
    return (*a)/(*b);
}

int main()
{   int x,y;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter value of y:";
    cin>>y;
    int res=div(&x,&y);
    cout<<res;
    return 0;
}