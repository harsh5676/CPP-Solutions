#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle();             // Non-Parameterized OR Default Constructor
    Rectangle(int l, int b); // Parameterized Constructor
    Rectangle(Rectangle &r); // Copy Constructor
    // Accessor
    int getLength() { return length; }   // INLINE FUNCTION
    int getBreadth() { return breadth; } // INLINE FUNCTION
    // Mutator
    void setLength(int l);
    void setBreadth(int b);
    // Facilitator
    int area();
    int perimeter();
    // Inspector
    bool isSquare();
    // Destructor
    ~Rectangle();
};

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l)
{
    if (l > 0)
        length = l;
    else
        length = 1;
}
void Rectangle::setBreadth(int b)
{
    if (b > 0)
        breadth = b;
    else
        breadth = 1;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed" << endl;
}

int main()
{
    system("cls");

    Rectangle r1(10, 10);
    cout << "Area " << r1.area() << endl;
    if (r1.isSquare())
        cout << "Yes" << endl;

    return 0;
}