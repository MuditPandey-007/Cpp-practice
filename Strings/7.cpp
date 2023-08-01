//Check if string is palindrome

#include<iostream>
#include<string>
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
    
    cout<<str<<" "<<rts<<endl;
    if(str==rts){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}