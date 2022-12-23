#include <iostream>
using namespace std;

class Time
{
    public:
     int hr,m,s;
     Time(int h=0,int min=0,int sec=0)
     {
         hr=h;
         m=min;
         s=sec;
     }
     bool operator ==(Time t2)
     {   
         if(hr<=24 && t2.hr<=24 && m<=60 && t2.m<=60 && s<=60 && t2.s<=60)
         {
             return ((hr==t2.hr) && (m==t2.m) && (s==t2.s));        

         }
         else
         {
             cout<<"Invalid format"<<endl;
             return 0;
         }
    
     }
};

int main()
{
    Time c1(6,1,0);
    Time c2(6,80,0);
    if(c1==c2)
    {
        cout<<"same";
    }
    else
    cout<<"different";
}