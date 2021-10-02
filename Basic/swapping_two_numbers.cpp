// Swapping two numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<< "Enter two numbers : ";
    cin>> a >> b;
    c=a;
    a=b;
    b=c;

    
    cout<< "The value after swapping is : " << a <<" " << b;
    return 0;
}