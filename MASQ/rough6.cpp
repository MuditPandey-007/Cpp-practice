// Pointer to an object.
#include<bits/stdc++.h>
using namespace std;

class check
{
    public:
    int a, b;
    void get() {
        cout << "Yoooo hooo." << endl;
        cout << "a = " << a << "   b = " << b << endl;
    }
};

int main()
{
    class check o1;
    o1.a = 10;
    o1.b = 20;
    o1.get();


    //NOTE:
    class check *obj;
    obj = &o1;
    
    obj->a = 50;
    obj->get();


    return 0;
}