#include<iostream>
using namespace std;

int fun(){
    static int s=10;
    s++;
    cout<<s<<endl;
}
                
int main()
{
    fun();
    fun();
    fun();
    fun();

    return 0;
}