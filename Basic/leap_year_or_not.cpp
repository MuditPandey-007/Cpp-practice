#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the year: ";
    cin>>n;

    if(n%4==0){
        cout<<"Leap year";
        if(n%100 == 0)
        {
        cout<<"leap year";
        if(n%400 ==0){
            cout<<"Leap year";
        }
        else{
            cout<<"Not a leap year";
        }
        }
    }
    else{
        cout<<"Not a leap year";
    }
    
    return 0;
}