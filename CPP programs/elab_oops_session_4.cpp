#include<iostream>
using namespace std;

class Stadium
{
    private:
    int a;
    public:
    Stadium(int x=0)
    {
        a=x;
    }
    Stadium operator - (Stadium obj2)
    {
        Stadium max=(a>obj2.a)?a:obj2.a;
        while(1)
        {
          if(max%a==0 && max%obj2.a==0)
          {
              return max;
              break;
          }
          ++max;
        }
    }
    void print()
    {
        cout<<max;
    }
};

int main()
{
    Stadium c1(36),c2(48);
    Stadium c3=c1-c2;
    c3.print();
}