// Types of Constructor & Destructor.
#include<bits/stdc++.h>
using namespace std;

class mudit
{
    int a;
    int b;
    public:
    // mudit() {            // Default, Non-parameterized constructor.
    //     a = 0;
    //     b = 0;
    //     cout << "Constructor Called\n" ;
    // }

    // mudit(int x, int y) {           // Parameterized contructor.
    //     a = x;
    //     b = y;
    // }

    mudit(int x=0, int y=0) {       //Non-Params as well as Params Const.
        a = x; 
        b = y;
    }

    void get() {
        cout << "A = " << a << "   B = " << b << endl;
    }
    ~mudit() {
        cout << "Destructor Called\n";
    }
};

int main()
{
    class mudit o1(2, 5);
    o1.get(); 
}