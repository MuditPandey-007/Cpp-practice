#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}

float sum(float a , float b){
    return a+b;
}

int sum(int a , int b , int c){
    return a+b+c;
}

int main()
{ 
    cout<<sum(10,5)<<endl;
    //IMP: cout<<sum(12.5,3.4)<<endl;  -->You will get error in this line because by default these values are taken as double and we'll have to convert it to float so that these values to pass through the float sum function.
    cout<<sum(12.5f, 3.4f)<<endl;
    cout<<sum(10,5,12)<<endl;
    return 0;
}