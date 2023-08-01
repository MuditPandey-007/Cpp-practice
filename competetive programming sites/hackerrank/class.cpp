#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int age;
    string first_name;
    string last_name;
    int standard;
    
    void set_age(){
        cin>>age;
    }
    void set_first_name(){
        cin>>first_name;
    }
    void set_last_name(){
        cin>>last_name;
    }
    void set_standard(){
        cin>>standard;
    }
    
    
    
    
    void get_age(){
        cout<<age<<endl;
    }
    void get_first_name(){
        cout<<first_name<<endl;
    }
    void get_last_name(){
        cout<<last_name<<", ";
    }
    
    void get_standard(){
        cout<<standard<<endl<<endl;
    }
    
    
    
    string to_string(){
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
        return ss.str();
    }
    
        
    
};



int main() {
    Student st;
    st.set_age();
    st.set_first_name();
    st.set_last_name();
    st.set_standard();
    
    st.get_age();
    st.get_last_name();
    st.get_first_name();
    st.get_standard();
    
    cout<<st.to_string();
    
    return 0;
}
