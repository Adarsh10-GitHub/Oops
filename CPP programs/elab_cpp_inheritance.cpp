#include <iostream>
using namespace std;
class Area
{
  public:
    float area_calc(float l,float b)
    {
        return l*b;
    }
};

class Perimeter
{
  public:
    float peri_calc(float l,float b)
    {
        return 2*(l+b);
    }
};

class Rectangle : public Area, public Perimeter
{
    private:
        float l, b;
    public:
       Rectangle() : l(0.0), b(0.0) { }
       void get_data( )
       {
           cout<<"Enter length: ";
           cin>>l;
           cout<<"Enter breadth: ";
           cin>>b;
       }

       
};

int main()
{
    Rectangle r;
    r.get_data();
    cout<<"Area = "<<r.area_calc();
    cout<<"\nPerimeter = "<<r.peri_calc();
    return 0;
}