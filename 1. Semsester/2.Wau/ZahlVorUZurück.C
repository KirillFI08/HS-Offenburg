#include <stdio.h>

int vorzurück(){
    int i;
    scanf("%d", &i);
    int stelle1u2= i%100;
    int stelle1= stelle1u2%10;
    int stelle2= stelle1u2/10 - stelle1;
    int stelle3= i-stelle2-stelle1;

}