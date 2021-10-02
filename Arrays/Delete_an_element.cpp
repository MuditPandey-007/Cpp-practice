#include<iostream>
using namespace std;

int main()
{
    int pos,i,n,arr[n];
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element location you want to delete: ";
    cin>>pos;

    for(i=pos-1; i<n; i++) {
        arr[i]=arr[i+1];
    }     

    for(i=0; i<n-1; i++)
    {
        cout<<arr[i];
    }

    return 0;
}