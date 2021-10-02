#include<iostream>
using namespace std;
int even_odd(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,num;
    cout<<"Enter a number: ";
    cin>>n;
    num=even_odd(n);
    if(num==1){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}