#include<iostream>
using namespace std;

int main()
{
    int temp;
    int array[] = {1,2,3,4,5,6,7};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<7; j++)
        {
             if(j==0){
            temp=array[0];
        }
        if(j==6){
                array[j]=temp;
                continue;
            }
            array[j]=array[j+1];
        }
    }
    for(int i=0; i<7; i++){
        cout<<array[i];
    }
}