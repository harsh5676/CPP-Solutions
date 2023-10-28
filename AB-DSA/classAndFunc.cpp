#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Rectangle
{
private: // Private member variables
    int length;
    int breadth;

public:
    Rectangle(int l, int b) // Constructor
    {
        length = l;
        breadth = b;
    }
    // void initialize(int l, int b)
    // {
    //     length = l;
    //     breadth = b;
    // }

    int area()
    {
        return length * breadth;
    }

    void changeLength(int l)
    {
        length = l;
    }
};

int main()
{
    Rectangle r(10, 5);

    // r.initialize(10, 5);
    r.area();
    r.changeLength(20);

    getch();
    return 0;
}