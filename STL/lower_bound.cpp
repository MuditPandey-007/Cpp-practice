#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]= {1,2,3,4,5,6};
    int n=6;

    //Method 1 : converting iterator of type *int to int by substracting -arr;
    int lower = lower_bound(arr,arr+n,1)-arr;
    cout<<lower<<endl;


    //Method 2 : using auto keyword and printing the pointer by using *
    auto lower_b= lower_bound(arr,arr+n,2);
    cout<<*lower_b-1<<endl;  //here we have to write * to make it point to the iterator created at line 14 named lower_b;

    //Method 3 : taking in form of iterator but converting to int while printing
    auto lowerr = lower_bound(arr,arr+n,3);
    cout<<lowerr-arr<<endl;


    //On vector 
    vector <int> vec ={1,2,3,4,5,6};
    //Method 1 (same as array)
    int it = lower_bound(vec.begin(), vec.end(), 4) - vec.begin();
    cout<<it<<endl;

    //method 2:
    auto it_2 = lower_bound(vec.begin(), vec.end(),5);
    cout<<*it_2-1<<endl;

    //method 3:
    auto it_3 = lower_bound(vec.begin(), vec.end(),6);
    cout<<it_3-vec.begin()<<endl;


    return 0;
}