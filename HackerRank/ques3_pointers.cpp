#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void update(int *a, int *b)
{
    int x, y;
    x = *a;
    y = *b;
    *a = x + y;
    *b = x - y;

    if (*b < 0)
    {
        *b = *b * (-1);
    }
    // Complete this function
}

int main()
{
    system("cls");

    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    getch();
    return 0;
}