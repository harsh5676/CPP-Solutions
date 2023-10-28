#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void initialise(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);

        return p;
    }
};

int main()
{
    system("cls");

    Rectangle r;

    int l, b;

    printf("Enter Length And Breadth -\n");
    // cin >> r.length >> r.breadth; /* Used when initialise function is not used */

    cin >> l >> b;

    r.initialise(l, b);

    int a = r.area();
    int peri = r.perimeter();

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    getch();
    return 0;
}