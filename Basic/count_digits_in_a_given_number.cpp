#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter a number : ";
    cin>>n;

    int temp=0;
    
    while(n>0){
    n=n/10;
    temp++;
    }

    cout<<temp;
    

    
    return 0;
}