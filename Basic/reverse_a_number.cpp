#include<iostream>
using namespace std;

int main()
{
    int n,temp=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>0){
        int rem;
        rem=n%10;
        temp=temp*10+rem;
        n=n/10;
    }
    cout<<temp;
    
    return 0;
}