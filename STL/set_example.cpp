#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={2,3,4,5,5,6};
    int arr2[]={1,2,3,3,4,5};

    set<int> st;
    for(int i=0; i<6; i++){
        st.insert(arr1[i]);
    }
    for(int i=0; i<6; i++){
        st.insert(arr2[i]);
    }

    cout<<"The set after union of two arrays is : ";
    for(auto it :st){
        cout<<it<<" ";
    }
    auto it = st.find(3);
    cout<<endl<< *it<<endl;

    auto a = st.count(3);
    cout<<a<<endl;

    return 0;
}