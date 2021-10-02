#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    if(n%7==0){
        cout<<"Divisible by 7";
    }
    else{
        cout<<"Not divisible by 7";
    }

    
    return 0;
}