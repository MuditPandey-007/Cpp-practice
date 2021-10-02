//Volume of sphere
#include<iostream>
using namespace std;

int main()
{
    float v,r;
    cout << "Enter the radius of sphere : ";
    cin>> r;

    v=(4*3.14*r*r*r)/3;

    cout << "the volume of sphere is : " << v;
    return 0;
}