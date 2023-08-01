// template function
#include<bits/stdc++.h>
using namespace std;

template<typename T>
void fun(T a, T b) {
    T c = a + b;
    cout << "Total = " << c << endl;
}

int main()
{
    fun(10, 5);                 // int func
    fun(15.56f, 16.6f);    // int func
    return 0;
}