#include<iostream>
using namespace std;

int main()
{
    int n,prime;
    cout<<"Enter a number :";
    cin>>n;

    if(n==2){
        prime=1;
    }
    else if(n%2!=0){
       {
           for(int i=2; i<n; i++)
           {
               if(n%i==0){
                   prime=0;
                   break;
               }
               else{
                   prime=1;
               }
           }
       }
       
    }
    else{
           prime=0;
       }

    if(prime==1){
        cout<<"Prime Number ";
    }
    else{
        cout<<"Not a prime number";
    }
   
    

    
    return 0;
}