#include<iostream>
using namespace std;
class emp
{
 public:
 int x=15;
 void sum(int data);
 void next()
 {
     cout<<"huck class inherited the base class next function"<<endl;

 }
};
class id:public emp
{
  public:
  void sum(int data)
  {
      x+=data;
  }
  void show()
  {
      cout<<"your id number is "<<x<<endl;
    
  }
};
int main()
{
    id huck;
    huck.sum(12);
    huck.show();
    huck.next();
    return 0;
}