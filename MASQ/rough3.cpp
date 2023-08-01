// Function overriding.
#include<bits/stdc++.h>
using namespace std;
class Parent 
{
    public:
    void add() {
        cout << "call from Parent";
    }
};
class Child: public Parent
{
    public: 
    void add() {
        cout << "call from Child";
    }
};


void check() {
    class Child obj_c;
    obj_c.add();
}

int main()
{
    check();
    return 0;
}