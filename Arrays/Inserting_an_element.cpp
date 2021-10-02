#include<iostream>
using namespace std;

int main()
{
    int position,i,n,x;
    int arr[n];

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the values in array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the number you want to insert : ";
    cin>> x;

    cout<<"Enter the position you want to insert : ";
    cin>> position;

    for(i=n-1; i>=position-1; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[position-1] = x;

    for(i=0; i<n+1; i++)
    {
        cout<<arr[i];
    }
    return 0;
}