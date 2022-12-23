#include<iostream>
using namespace std;
int main()
{
    int arr[10],n;
    int sum;
    int *ptr;
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    ptr=arr;

    for(int i=0;i<n;i++)
    {
        sum+=*(ptr+i);
    }
    cout<<"sum of array elements is "<<sum;

   return 0;
}