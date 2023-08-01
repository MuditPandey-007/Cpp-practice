//Preprocessor 
#include<iostream>

using namespace std;

#define PI 3.14
#define c cout
#define MSG(x) #x

int main(){
    c<<MSG("Hello");
    c<<endl<<"Value of pi is: "<<PI;

    return 0;

}
