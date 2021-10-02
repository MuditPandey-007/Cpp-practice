#include<iostream>
using namespace std;

int main()
{
    int a,b, flag=1;
    cout<<"Enter lower limit : ";
    cin>>a;
    cout<<"Enter upper limit :";
    cin>>b;

    for(int i=a; i<=b; i++)
    {
        flag=1;
        for(int j=2; j<i; j++)  {
            if(i%j==0)  {
                flag=0;
                break;
            }
        }
        if(i <= 1)
        {
            flag = 0; 
            continue;
        }
        if(flag==1){
            cout<<i<<" ";
        }
    }
    return 0;
}