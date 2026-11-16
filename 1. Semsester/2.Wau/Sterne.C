#include <stdio.h>

int sternquadrat()
{
    int i = 5;
    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return 0;
}

int sternpyramide()
{
    int zeilen = 5;
    int breite = 1 + zeilen * 2;
    int a = zeilen;
    int b = breite;

    while (a >= 0)
    {
        for (int j = 0; j < a / 2; j++)
        {
            printf(" ");
        }
        a--;

        for (int k = 0; k < b; k++)
        {
            printf("*");
        }
        b++;

        printf("\n");
    }

    getchar();
    return 0;
}

int sternpyramide2()
{

    int zeilen = 5;

    for (int i = 1; i <= zeilen; i++)
    {
        for (int j = 1; j <= zeilen - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    sternpyramide2();
    return 0;
}