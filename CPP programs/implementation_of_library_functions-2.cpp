#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[10];
    char s2[10];
    cout<<"enter the first string :";
    cin>>s1;
    cout<<"enter the second string :";
    cin>>s2;
    strcat(s1,s2);
    cout<<"string after concatenation is: "<<s1<<endl;
    int len=strlen(s1);
    cout<<"Length of the concatenated string is: "<<len; 
    return 0;
}