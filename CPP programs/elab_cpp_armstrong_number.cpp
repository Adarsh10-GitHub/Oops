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
    
    void operator ==(compare cm)
    {   
        if(a==cm.a)
        cout<<"friendly";
        else
        cout<<"fuck";
    }
};

int main()
{       int res=0;
        int temp=371;
        int a=temp;
        while(a!=0)
        {  
            int rem=a%10;
            res+=rem*rem*rem;
            a/=10;
        }
       
    compare c1(temp),c2(res);
    c1==c2;
}