#include<iostream>
using namespace std;

int main()
{
    int temp=1;
    for(int i=1; i<=6; i++){
        for(int j=1; j<i; j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
    
    return 0;
}