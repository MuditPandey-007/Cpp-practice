//Area of Rectangle using oops concept

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    cout << "The area is: " << r1.area() << endl;
    cout << "The perimeter is: " << r1.perimeter() << endl;
}