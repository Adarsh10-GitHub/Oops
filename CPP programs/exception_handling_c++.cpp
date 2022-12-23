#include <iostream>

using namespace std;

float divide(int x, int y) {
    if (y == 0) {
        throw y;
    } else if (y < 0) {
        throw "Negative Input";
    }
    return (x / y);
}

int main() {
    int i, result;
    //try block

    cout << "Enter the Number :";
    cin>>i;
    try {
        result = divide(100, i);
        cout << result << endl;
    }    //catch block
    catch (int exception_value) {
        cout << "Exception Occurred : Exception Value : " << exception_value;
    } catch (const char* excpection_str) {
        cout << "Exception Occurred : Exception Value : " << excpection_str;
    }
    return 0;
}