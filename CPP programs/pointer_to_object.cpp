#include<iostream>
using namespace std; 
class Date
{
private:
short  int  dd,  mm,  yy;
public:
Date()
{
dd  =  mm  =  yy  =  0;
}

void getdata(int i, int j, int k)
{
dd = i;
mm = j;
yy = k;
}
void prndata(void)
{
cout<<"\nData  is  "<<dd<<"/"<<mm<<"/"<<yy<<"\n";
}
};

main()
{
Date D1; Date *dptr;

cout<<"Initializing  data  members  using  the  object,  with  values  20,  11,  2020"<<endl;
 D1.getdata(20,11,2020);

cout<<"Printing  members  using  the  object  ";
 D1.prndata();

dptr = &D1;
cout<<"Printing  members  using  the  object  pointer  "; 
dptr->prndata();
return  0;
}
