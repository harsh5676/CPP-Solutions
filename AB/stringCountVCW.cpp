#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

// TODO
/* Make this program such that if there are multiple spaces then also the program will give the correct number of words. */

using namespace std;

int main()
{
    system("cls");

    string str;
    int vcount = 0, ccount = 0, scount = 0;

    cout << "Enter Input - ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            vcount += 1;
        }
        else if (str[i] == ' ')
        {
            scount += 1;
        }
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            ccount += 1;
        }
    }

    cout << "Number of Vowels - " << vcount << endl;
    cout << "Number of Consonants - " << ccount << endl;
    cout << "Number of Words - " << scount + 1 << endl;

    return 0;
}