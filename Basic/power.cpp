#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter number : ";
    cin>>x;
    cout<<"Enter power : ";
    cin>>y;

    int power = pow(x,y);

    cout<<power;

    return 0;
}