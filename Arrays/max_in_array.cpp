#include<iostream>
using namespace std;

int main()
{
    int n,max=0,i;
    int arr[n];

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<< "Enter values in array :";

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Maximum is : "<<max;

    return 0;
}