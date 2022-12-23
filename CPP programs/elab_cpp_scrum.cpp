#include<iostream>
using namespace std;

class Scrum
{
    private:
    int a;
    public:
    Scrum(int x=0){a=x;}
    Scrum operator--(int)
    { 
     Scrum fact;
     fact.a=1;
     for(int i=1;i<a;i++)
     {
       fact.a*=i;
     }
     return fact;
    }
    void print(){cout<<a;}
   
};

int main()
{
    
    Scrum n1(7);
    Scrum n2=n1--;
    n2.print();
    
}