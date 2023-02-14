#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int n;
    float a[100], sum = 0.0, num, avg;

    cout << "Enter the total number of Elements -" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << " - ";
        cin >> a[i];
        sum += a[i];
    }

    avg = sum / n;

    cout << "Average of total Elements in an Array - " << avg << endl;

    getch();
    return 0;
}