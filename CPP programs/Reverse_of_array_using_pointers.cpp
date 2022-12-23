#include<iostream>
using namespace std;
int main()
{
    int A[10],n;
    int *ptr;
    cout<<"Size of the array :";
    cin>>n;
    cout<<"enter the elemets :";
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    ptr=&A[n-1];
    for(int i=0;i<n;i++)
    {
        cout<<*ptr<<endl;
        ptr--;
    }

    return 0;
}