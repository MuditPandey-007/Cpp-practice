#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=4; j++){
            if(i==1 || i==5){
                cout<<"*";
            }
            else if(j==1 || j==4)
            {
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
        
    }

    return 0;
}