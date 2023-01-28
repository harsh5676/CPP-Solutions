#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int a, b, c;
    float root1, root2;

    cout << "Enter 3 values: " << endl;
    cin >> a >> b >> c;
    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    cout << root1 << " " << root2 << endl;
    getch();
    return 0;
}