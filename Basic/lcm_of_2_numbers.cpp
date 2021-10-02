#include<iostream>
using namespace std;

int main()
{
    int a,b,lcm;
    cout<<"Enter number 1: ";
    cin>>a;

    cout<<"Enter number 2: ";
    cin>>b;

   int max;
   if(a>b){
       max=a;
   }
   else{
       max=b;
   }

    while(max>0){
   if(max%a==0 && max%b==0){
       cout<<"The LCM of "<<a<<" and "<<b<<" is "<<max;
       break;
   }
   else{
       max++;
   }
}
   
   
    
    
    return 0;
}