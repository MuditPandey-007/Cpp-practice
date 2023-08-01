#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 2, 6, 1};
    int n = 5;
    vector<int> vec = {5, 4, 3, 2, 1};
    vec.push_back(7);
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout<<endl;
    sort(vec.begin(), vec.end());
    sort(arr, arr + n); //sorting in ascending order
     for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout<<endl;
    sort(arr,arr+n, greater<int>()); //sorting in descending order 
    
     for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout<<endl;
   int maxi  = *max_element(arr, arr+n);
   int mini = *min_element(arr, arr+n);
   cout<<"max element is :" <<maxi<<endl;
   cout<<"min element is :" <<mini<<endl;

    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}