#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter a number :";
    cin>>n;
    
    for(i=n; i>0; i--){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    
    return 0;
}