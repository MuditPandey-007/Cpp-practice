#include<bits/stdc++.h> 
using namespace std;

int main()
{
    //Two integer pair
    pair <int,int> q = {1,2};
    cout<<q.first<<" "<<q.second<<endl;

    //3 integer pair: 
    pair<int , pair<int,int>> p = {1,{2,3}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    //we can store more than 2 variable by using this nested pairs 

    //pair array:  
    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second<<endl;
    return 0;
}