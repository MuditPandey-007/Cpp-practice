//Area of rectangle by taking memory into heap

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
    Rectangle *p;
    p = &r1;
    p -> length = 10;
    p -> breadth = 20;
    cout << "The area is: " << p-> area() << endl;
    cout << "The perimeter is: " << p -> perimeter() << endl;
}