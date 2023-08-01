#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int k=7; k>=2*i; k--){
            cout<<" ";
        }
        for(int l=1; l<=i; l++){
            cout<<i-l+1;
        }
        cout<<endl;
    }
    
    return 0;
}