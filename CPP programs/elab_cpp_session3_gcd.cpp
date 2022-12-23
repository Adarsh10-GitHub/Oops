#include<iostream>
using namespace std;

class Event
{   private:
    int a;
    public:
    Event(int x=0){a=x;}
    Event operator+ (Event obj)
    {
        Event obj1;
        for(int i=1;i<=a && i<=obj.a;i++)
        {
            if(a%i==0 && obj.a%i==0)
            {
                obj1.a=i;
            }
        }
        return obj1;
    }
    void print()
    {
        cout<<a;
    }

};

int main()
{
    Event e1(16),e2(76);
    Event e3=e1+e2;
    e3.print();
}