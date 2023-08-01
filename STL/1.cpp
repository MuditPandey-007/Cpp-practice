//basic
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of your vector: " <<endl;
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter an element to add to this vector : ";
        cin>>element;
        vec1.push_back(element);
    }
    cout<<"Array before inserting 566 five times : ";
    display(vec1);
    vector<int> :: iterator iter = vec1.begin(); //or we can use auto iter = vec1.begin();
    vec1.insert(iter+2,5,566);
    cout<<"Array after inserting 566 five times is ";
    display(vec1);

    return 0;
}