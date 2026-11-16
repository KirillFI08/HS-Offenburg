#include <stdio.h>

void celsius(){
    for(int i=0; i<=300; i++){
        float celsius = (i - 32) * 5.0f / 9.0f;
        printf("%.2f\n", celsius);
    }

}

int main(){
    celsius();
    return 0;
}