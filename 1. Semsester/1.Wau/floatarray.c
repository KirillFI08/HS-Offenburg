#include <stdio.h>

#include <stdio.h>

int einlesen(float arr[]){
    int a;
    printf("Wie viele Zahlen (max 100)? ");
    scanf("%d", &a);
    if(a < 1 || a > 100) return 0;

    for(int i = 0; i < a; i++){
        printf("Geben Sie die %d. Zahl ein: ", i + 1);
        scanf("%f", &arr[i]);
    }
    return a;
}

float arithmittel(float arr[], int a){
    float sum = 0;
    for(int i = 0; i < a; i++){
        sum += arr[i];
    }
    return sum / a;
}

int main(){
    float arr[100];
    int anzahl = einlesen(arr);
    if(anzahl == 0) return 1;

    printf("Das arithmetische Mittel ist: %f\n", arithmittel(arr, anzahl));
    return 0;
}