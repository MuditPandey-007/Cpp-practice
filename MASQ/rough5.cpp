// this keyword
#include<bits/stdc++.h>
using namespace std;


class check 
{
    public:
    int a , b;
    void set(int a, int b) {
        this->a = a;
        this->b = b;
    }
    void get() { cout << a  << "  " << b << endl; }
};
int main()
{
    class check o1;
    o1.set(10, 20);
    o1.get();
    return 0;
}