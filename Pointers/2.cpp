//pointer example 2
#include<iostream>
using namespace std;

int main()
{
    int *p = new int[5];
     p[2]= 15;

    NOTE://*p=NULL; -->we should not initialize the value of pointer p to null before deleting it because if we do this the heap will occupy memory and creates a problem called memory leak.

    delete []p;

   //p=NULL; 
    p=nullptr; //instead of p=NULL; in modern c++ we use nullptr
    cout<<p;
   

    return 0;
}
