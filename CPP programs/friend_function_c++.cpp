#include<iostream>
#include<conio.h>
using namespace std;

class base {
    int val1, val2;
public:

    void get() {
        cout << "Enter two values:";
        cin >> val1>>val2;
    }
    friend float mean(base ob);
};

float mean(base ob) {
    return float(ob.val1 + ob.val2) / 2;
}

int main() {
    
    base obj;
    obj.get();
    cout << "\n Mean value is : " << mean(obj);
   // getch();
}