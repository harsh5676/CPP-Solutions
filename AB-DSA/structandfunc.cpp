#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct Rectangle r;

    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);

    getch();
    return 0;
}