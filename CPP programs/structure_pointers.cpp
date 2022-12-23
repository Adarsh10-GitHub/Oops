#include <iostream>
using namespace std;

struct Height {
    int feet;
    float inch;
};

int main() {
    Height *ptr, h;

    ptr = &h;
    
    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;
 
    cout << "Height =" << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}