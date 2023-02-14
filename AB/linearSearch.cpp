#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int a[10], n = 10;
    int key;
    cout << "Enter numbers -" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter key -" << endl;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "Found at " << i;
            return 0;
        }
    }
    cout << "Not Found";
    getch();
    return 0;
}