#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");

    string str = "Welcome";

    // str.resize(70);
    // cout << str.max_size() << endl;

    // str.clear();
    // cout << str.length() << endl;
    // cout << str << endl;

    if (str.empty())
    {
        cout << "String is Empty" << endl;
    }
    else
    {
        cout << "String is " << str << endl;
    }

    return 0;
}