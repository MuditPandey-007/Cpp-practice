#include<iostream>
using namespace std;

int prime(int n);

int main()
{
    int n,num;
    cout<<"Enter a number: ";
    cin>>n;

    num=prime(n);

    if(num==0){
        cout<<"Not a Prime Number ";
    }
    else{
        cout<<"Prime number ";
    }
    
    return 0;
}

int prime(int n){
    if(n==2)
    {
        return 1;
    }
    else if(n%2!=0)
    {
        for(int i=2; i<n; i++){
            if(n%i==0){
                return 0;
                break;
            }
        }
    }
    else{
        return 0;
    }
    return n;
    
}