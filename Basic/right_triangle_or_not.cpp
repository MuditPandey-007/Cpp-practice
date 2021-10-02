#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the length of sides of triangle: ";
    cin>>a>>b>>c;

    if(a==b){
        cout<<"Right triangle";
    }
    else if(b==c){
        cout<<"Right triangle";
    }
    else if(c==a){
        cout <<"Right triangle";
    }
    else{
        cout<<"Not a right triangle";
    }

    
    return 0;
}