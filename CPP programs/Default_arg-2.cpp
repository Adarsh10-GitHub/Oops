#include<iostream>
using namespace std;

string conct(string a ,string b="World")
{
    string result=a+" "+b;
    return result;
}

int main()
{
    cout<<conct("Hello")<<endl;
    cout<<conct("hi","brother")<<endl;
    cout<<conct("Wassup")<<endl;
}