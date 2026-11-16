#include <stdio.h>

void selectionsort(float arr[], int length){
    
    for(int i=0; i<length; i++){

        float temp = arr[i];
        int tempi = i;

        for(int j=i+1; j<length; j++){

            if(arr[j]<temp){

                temp = arr[j];
                tempi = j;
                
            }
        }
        
        float temp2 = arr[i];
        arr[i] = temp;
        arr[tempi] = temp2;
    }

    printf("Sortierte Liste: ");
    for(int i=0; i<length; i++){
        printf("%f ", arr[i]);
    }

}

int main(){
    float arr[] = {5, 2, 9, 1, 5, 6};
    selectionsort(arr, 6);
    return 0;
}