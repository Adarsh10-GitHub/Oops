#include<iostream>
using namespace std;

class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  Car carObj1;
  carObj1.brand = "Mercedes";
  carObj1.model = "SLS AMG";
  carObj1.year = 2010;

  Car carObj2;
  carObj2.brand = "Dodge";
  carObj2.model = "Challenger";
  carObj2.year = 1969;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
