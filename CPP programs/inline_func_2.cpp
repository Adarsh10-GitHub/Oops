#include<iostream>
using namespace std;

class line {
public:
    inline float cube(float x) {
        return (x * x * x);
    }
};

int  main() {
    line obj;
    float val;
    cout<< "Enter the value :";
    cin>> val;
    cout << "Cube value is :" << obj.cube(val);
}