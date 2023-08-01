//How to use strings in cpp
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="abbccd";
    int freq[26];
    for(int j=0; j<26; j++){
        freq[j]=0;
    }
    for(int i=0; i<s.length(); i++){
         freq[s[i]-'a']++;
    }
     for(int j=0; j<26; j++){
        cout<<freq[j];
     }
    return 0;
}