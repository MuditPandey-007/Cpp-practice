#include<iostream>
using namespace std;


  int add(int x, int y){
        return x+y;
    }

int main()
{
    int a=10, b=15;
    int c = add(a,b);
    cout<<"sum is "<<c;

    return 0;
}