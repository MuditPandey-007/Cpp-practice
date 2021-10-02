#include<iostream>
using namespace std;

int area_of_circle(int r){
    int area=3.14*r*r;
    return area;
}

int main()
{
    int r;
    cout<<"Enter radius: ";
    cin>>r;

    int area=area_of_circle(r);
    cout<<area;
    
    return 0;
}
