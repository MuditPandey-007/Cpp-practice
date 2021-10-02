#include<iostream>
using namespace std;

int next_prime_number(int n){

        int found=0;
        for(int i=2; i<n; i++){
            if(n%i==0)
            {
                n++;
            }
            else{
                found =1;
            }
    }
    if(found==1){
        return n;
    }
}

int main()
{
    int n,m;
    cout<<"Enter a number :";
    cin>>n;

    m=next_prime_number(n);
    cout<<m;



    
    return 0;
}