#include<iostream>
using namespace std;

    class rectangle{
        private:
        int length;
        int breadth;

        public:
        void setlength(int l)
        {
            length=l;
        }
        void setbreadth(int b)
        {
            breadth=b;
        }
        int getlength(){
            return length;
        }
        int getbreadth(){
            return breadth;
        }
    };

    int main()
    {
        rectangle r1;
        r1.setbreadth(5);
        r1.setlength(10);
        cout<<r1.getbreadth()<<endl;
        cout<<r1.getlength();

        return 0;
    }
