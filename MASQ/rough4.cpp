// Virtual function
#include<bits/stdc++.h>
using namespace std;

class Mudit
{
    public:
    virtual void add() = 0;     // pure virtual function
};
class masq: public Mudit
{
    public: 
    void add() {
        cout << "Masq House";
        cout << endl;
    }
};


int main()
{
    class masq c;
    class Mudit *p = &c;

    p->add();
    class Mudit mu;
    mu.add();

    

    return 0;
}