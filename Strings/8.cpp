//Write a program to find a substring within a string. If found display its starting position
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "%";
    int min = 0;
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            if(ch>=33 && ch<=43){
                cout<<"yes";
            }
            else{
                min++;
            }
        }
        cout<<min<<endl;
    return 0;
}