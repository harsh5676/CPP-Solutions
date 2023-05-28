#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int count;

    for (int i = 0; i < 5; i++)
    {
        count = 1;
        for (int j = 0; j < 5; j++)
        {
            if (i <= j - i)
            {
                cout << count << " ";
                count++;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    getch();
    return 0;
}