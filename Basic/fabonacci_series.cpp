#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=1;

    cout<<"Enter the limit : ";
    cin>>n;

    if(n>0){
        cout<<a<<" "<<b<<" ";
    }

  
    for(int i=a; i<=n; i++){
        int sum;
        sum=a+b;
        a=b;
        b=sum;
        cout<<b<<" ";
    }

}