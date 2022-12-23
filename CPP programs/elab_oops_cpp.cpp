#include<iostream>
using namespace std;

class cutoff
{ public:
   int x,y,z;
   cutoff(int a=0,int b=0,int c=0)
   {
       x=a;
       y=b;
       z=c;
    }
    friend void operator >>(cutoff c1,cutoff c2)
    {
        int res;
        res=x+y*0.5+cz*0.5;
        cout<<res;
    }

};

int main()
{
    
    cutoff in.operator>>(80,65,70);
    
    
}