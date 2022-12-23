#include<iostream>
using namespace std;

class room
{  public:
   double side;
    double calculateArea() {
        return side*side;
    }

    double calculateVolume() {
        return side * side * side;
    }
};

int main()
{   room obj;
    cout<<"Enter the side of the cubical room:";
    
    cin>>obj.side;
    cout<<"Area of each wall of the cubical room: "<<obj.calculateArea()<<endl;
    cout<<"Volume of the cubical room: "<<obj.calculateVolume()<<endl;
}