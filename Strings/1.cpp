//reverse an string without using any predefined functions
#include<iostream>
using namespace std;

int main()
{
    string str,rts;
    cout<<"enter the string : ";
    cin>>str;
    rts=str;
    for(int i=0; i<str.length(); i++){
        rts[str.length()-i-1]= str[i];
    }
    
    cout<<rts<<endl;

    return 0;
}