#include<bits/stdc++.h>
using namespace std;

int main()
{
    // d=4;
    // for(int i=1; i<=d; i++){
    //     int temp=arr[0];
    //     arr.erase(arr.begin());
    //     arr.push_back(temp);
    // }

    //NOTE:better approach:
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[(d+i)%arr.size()]);
    }
    return ans;
    
}