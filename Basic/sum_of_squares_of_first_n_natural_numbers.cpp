#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the upper limit: ";
    cin>>n;

    for(i=1; i<=n; i++){
        sum=sum+i*i;
    }
    cout<<sum;
    
    return 0;
}