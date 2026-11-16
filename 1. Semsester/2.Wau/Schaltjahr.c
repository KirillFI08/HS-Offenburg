#include <stdio.h>

int rechnung(int i){
    if (i%4==0 && i%100!=0 || i%400==0)
    {
        printf("Schaltjahr");
    }
    else
    {
        printf("kein Schaltjahr");
    }
}

int main(){
    int i;
    printf("Bitte geben Sie ein Jahr ein: ");
    scanf("%d", &i);
    rechnung(i);
    return 0;
}