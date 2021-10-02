#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;

    int max;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }

    while(max>0){
        if(a%max==0 && b%max==0){
            cout<<max;
            break;
        }
        else{
            max--;
        }
    }

    return 0;
}