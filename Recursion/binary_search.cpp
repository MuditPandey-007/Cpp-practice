#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int target , int s, int e){
    if(e<s){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(target < arr[mid]){
        return binarysearch( arr,  target,  s,  mid-1);
    }
    else{
        return binarysearch( arr,  target ,  mid+1,  e);
    }
    
}



int main()
{
    int n,mid,s,e;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter the key to be find : ";
    int target;
    cin>>target;

    int ans;
    ans = binarysearch( arr, target, 0, n-1);
    cout<<"Found at index : "<<ans;
    return 0;
}