/*
Write a program to implement the template to perform the generic function.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

template <class T>

T add(T &a, T &b)
{
    T result = a + b;
    return result;
}

int main()
{
    system("cls");
    int x = 5;
    int y = 6;
    float p = 2.3;
    float q = 4.6;
    cout << "Sum of x and y - " << add(x, y) << endl;
    cout << "Sum of p and q - " << add(p, q) << endl;
    getch();
    return 0;
}