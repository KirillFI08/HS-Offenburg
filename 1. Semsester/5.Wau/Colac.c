#include <stdio.h>
#include <stdlib.h> // für calloc und free

int main()
{
    int n = 20;
    int *feld = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        feld[i] = i;
    }
    
    n = 40;
    feld = calloc(n, sizeof(int));

    for (int i = 0; i <= n; i++)
    {
        feld[i] = i;
        printf("%d ", feld[i]);
    }

    free(feld); // Free the allocated memory
    return 0;
}