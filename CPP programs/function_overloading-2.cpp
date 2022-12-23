#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{   int a,b;
    double c,d;
    a=8,b=2;
    c=2.8,d=5.4;
    cout << add(a, b); 
    cout << '\n';
    cout << add(c, d); 

    return 0;
}