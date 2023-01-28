#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int u, v, a;
    float speed;
    cout << "Enter Initial Speed: " << endl;
    cin >> u;
    cout << "Enter Final Speed: " << endl;
    cin >> v;
    cout << "Enter Accleration: " << endl;
    cin >> a;
    speed = (v * v - u * u) / (2 * a);
    cout << "Speed is " << speed << endl;
    getch();
    return 0;
}