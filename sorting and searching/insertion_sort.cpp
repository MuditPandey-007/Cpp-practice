#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){ //j!=0 because arr[j-1] condition will go out of bounds and produce error and arr[j-1]>arr[j] means we have to continue swapping until the previous element is bigger than the next element
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}