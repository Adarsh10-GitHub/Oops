#include  <bits/stdc++.h> 
using namespace std; 
class A
{
public:
void func(int x)
{
cout  <<  "value  of  x  is  "  <<  x  <<  endl;
}
void func(double x)
{
cout  <<  "value  of  x  is  "  <<  x  <<  endl;
}
void func(int x, int y)
{
cout  <<  "value  of  x  and  y  is  "  <<  x  <<  ", "  <<  y  <<  endl;
}
};

int main() {

A obj1; 
obj1.func(8);
obj1.func(6.428);
obj1.func(91,55);
 return  0;
}

