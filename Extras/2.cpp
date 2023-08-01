//functions that can be used on strings
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str = "Hi, I am Mudit Pandey";
    string s1 = "fam";
    string s2 = "ily";
    string s3="fam";

    s1.append(s2); //this will append s2 into string s1

    cout<<s1<<endl; 
    cout<<s3+s2<<endl; //will simply add 2 strings
    cout<<s1[1]<<endl; // will access the character at position 1 of s1 i.e "a"
    str.clear(); //this will clear the whole string 
    cout<<str<<endl;
    cout<< s2.compare(s1)<<endl; 
     
    if(s1.empty()){
        cout<<"string is empty"; //this function will check if the string is empty or not
    }

    sort (s1.begin(), s1.end()); //we cant sort the string in ascending order like this but remember to #include<algorithm>
    cout<<s1<<endl;

    return 0; 
}