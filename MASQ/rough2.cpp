#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p[3];

    int *p[0] = new int[5];
    
    for(int i=0; i<5; i++) {
        cin >> p[0][i];
    }

    int *p[1] = new int[5];
    for(int i=0; i<5; i++){
        cin >> p[1][i];
    }

    cout << "to get value: " << endl;
    for(int i=0; i<5; i++) 
        cout << p[0][i] << " ";
    
    cout << endl;

    for(int i=0; i<5; i++) 
        cout << p[1][i] << " ";

    return 0;
}