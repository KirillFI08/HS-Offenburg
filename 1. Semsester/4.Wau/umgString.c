#include <stdio.h>
#include <string.h>

void umgString()
{
    char String[100];
    char UmgString[100];

    printf("Geben Sie eine Zeichenfolge (max 100 Zeichen) ein: ");
    scanf("%99s", String);
    printf("Sie haben die Zeichen '%s' eingegeben.\n", String);
    printf("Die Zeichenkette in umgekehrter Reihenfolge lautet: ");

    char *ptr;
    ptr = String + strlen(String);
    int i = 0;
    while (ptr > String)
    {

        ptr--;
        printf("%c", *ptr);
        UmgString[i] = *ptr;
        i++;
    }
    printf("\n");
    UmgString[i] = '\0'; // Null-terminate the reversed string
    printf("Palindrom? : \n");
    if (strcmp(String, UmgString) == 0)
    {
        printf("Ja, die Zeichenkette ist ein Palindrom.\n");
    }
    else
    {
        printf("Nein, die Zeichenkette ist kein Palindrom.\n");
    }
}

int main()
{
    umgString();
    return 0;
}