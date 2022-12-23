#include<iostream>
using namespace std;
class complex {
public:
    int re,im;
     complex(int h=0,int g=0)
     {  re=h;
        im=g;
     }
    complex operator-(complex ob){
         complex t;
         t.re = re + ob.re;
         t.im = im + ob.im;
         return t;
    }
    void print()
    {   
        cout<<re<<"+"<<im<<"i\n";
    }
};
int main()
{   complex c1(2,5),c2(3,0);
    c1.print();
    complex c3;
    c3=c1-c2;
    c3.print();
    (c1-c3).print();
}