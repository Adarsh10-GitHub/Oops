#include<iostream>
using namespace std;

class compare
{   private:
    int a;
    public:
    compare(int x=0)
    {
        a=x;
    }
    
    void operator ==(compare com)
    {
        int res1=0,res2=0;
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            {
                res1+=i;
            }
        }
        for(int j=1;j<com.a;j++)
        {
            if(com.a%j==0)
            {
                res2+=j;
            }
        }
        if(a==res2 && com.a==res1)
        cout<<"friendly";
        else
        cout<<"fuck";
    }
};

int main()
{
    compare c1(131),c2(121);
    c1==c2;
}
