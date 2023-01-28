#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int i = 0, k = 0;
    char n[100];
    while (i < 5)
    {
        printf("n[%d] = ", i);
        scanf("%d", &n[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (i < 5)
    {
        printf("n[%d] = %d\n", i, n[i]);
        i++;
    }
    i = 0;
    while (i < 5)
    {
        k += n[i];
    }
    printf("Total of array inputs = %d", k);

    getch();
    return 0;
}