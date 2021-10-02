#include<iostream>
using namespace std;

int main()
{
    int rows,columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<< "Enter the number of columns: ";
    cin>>columns;

    int num1[rows][columns],num2[rows][columns],sum[rows][columns];

    cout<<"Enter values into array one: ";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++){
        cin>>num1[i][j];
        }
    }

    cout<<"Enter values into array two: ";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++){
        cin>>num2[i][j];
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++){
        sum[i][j]=num1[i][j]+num2[i][j];
        }
    }

    cout<<"The sum of matrices is: "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++){
        cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}