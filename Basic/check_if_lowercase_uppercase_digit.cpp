#include<iostream>
using namespace std;

int main()
{
    char n;
    cout<<"Enter a character : ";
    cin>>n;


    if(n>=65 && n<=90){
        cout<<"Uppercase";
    }
    else if(n>=97 && n<=122){
        cout<<"Lowercase";
    }
    else if(n>=48 && n<=57 ){
        cout<<"Digit";
    }
    else{
        cout<<"Special character";
    }
   
    
    return 0;
}