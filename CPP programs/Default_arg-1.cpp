#include<iostream> 
using namespace std; 

int vol_cuboid(int l,int b=20,int h=5)
{
   return(l*b*h); 
}

int main()
{
    cout<<"Volume is "<<vol_cuboid(10)<<endl;
    cout<<"Volume is "<<vol_cuboid(10,15)<<endl;
    cout<<"Volume is "<<vol_cuboid(10,15,8)<<endl;
   
}