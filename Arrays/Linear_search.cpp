//To find an element in an array using linear search

#include<iostream>
using namespace std;

int main()
{
    int i,n,x;
    int arr[n];

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the values in array: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element you want to search: ";
    cin>> x;

    for(int i=0; i<n; i++)
    {
        if(x==arr[i])
        {
            cout<<"Found at "<<i+1;
            return 0;
        }
        
      
    }
    cout<<"Element not found";

    return 0;    
  
}