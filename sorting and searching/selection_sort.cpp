#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    { 
    min_idx = i;
    for (j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[min_idx])
            min_idx = j;
    }
    if (min_idx != i)
        swap(arr[min_idx], arr[i]);
    }
}

void printarray(int arr[], int size){
    int i;
    for( i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={12,5,6,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"Sorted array :  \n";
    printarray(arr,n);
   

    return 0;
}
