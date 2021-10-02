#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int i;
    int max = INT_MIN;
    int min = INT_MAX;

    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "maximum is : " << max << endl;
    cout << "minimum is : " << min << endl;

    return 0;
}