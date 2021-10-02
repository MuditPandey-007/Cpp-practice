#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int temp,max=0;
    while(n>0){
        temp=n%10;
        if(temp>max){
            max=temp;
        }
        n=n/10;
    }
    cout<<max;
    

    
    return 0;
}