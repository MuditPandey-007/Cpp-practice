//We can't change the size of array in stack once the size is already defined .........in order to change the existing size of an array we need to create an array inside heap.........we can do that by using the following code: 

#include<iostream>
using namespace std;

int main()
{
    int *p = new int[20]; //here, we declared an array inside a heap
    
    delete []p; //we have to delete the existing array before creating other array else it will cause memory leak
    
    p = new int[40]; //here, we changed the size of array to 40

    return 0;
}