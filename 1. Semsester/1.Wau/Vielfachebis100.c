#include <stdio.h>

void vielfache(int x){
    int u=x;
    printf("%d\n", x);
    while(u+x<100){
        u+=x;
    printf("%d\n", u);
    }
}

int main(){
    vielfache(5);
    return 0;
}
