#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);

    return p;
}

int main()
{
    system("cls");

    Rectangle r = {0, 0}; // Initialize

    int l, b;

    printf("Enter Length And Breadth -\n");
    // cin >> r.length >> r.breadth;

    cin >> l >> b;

    initialise(&r, l, b);

    int a = area(r);
    int peri = perimeter(r);

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    getch();
    return 0;
}