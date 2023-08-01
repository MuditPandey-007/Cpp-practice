//count number of words in a string
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int count = 1;
    for(int i=0; i<str.length()-1; i++){
        if(str[i]==' '){
            count++;
        }
        else{
            continue;
        }
    }
    
    cout<<count;
    return 0;
}