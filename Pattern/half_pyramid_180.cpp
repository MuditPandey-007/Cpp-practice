#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"enter the value of n : ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(k=1; k<i; k++){
            cout<<"*";
        }

      
        cout<<endl;
        
    }
 
    return 0;
}