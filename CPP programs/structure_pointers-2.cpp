#include<iostream>
using namespace std;

struct Area
{
    int length;
    int breadth;
};

int main()
{   Area *p,A;
    p=&A;
    cout<<"Enter the length: ";
    cin>>(*p).length;
    cout<<"Enter the breadth: ";
    cin>>(*p).breadth;
    cout<<"Area of the rectangle is "<<(*p).length*(*p).breadth;
    return 0;
}