#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int a,b,c;
    cout<<"Enter 3 no.s"<<endl;
    cin>>a>>b>>c;
    
    if(a>b && a>c)
    {
        cout<<a<<endl;
    }
    else if(b>c)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    getch();
    return 0;
}