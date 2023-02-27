#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int dizi[100];

    printf("\nRastgele Dizi:  \n");
    for (int i = 0; i < 10; i++){
        dizi[i] = rand() % 100;
        printf("%d ", dizi[i]);
    }

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (dizi[j] > dizi[j + 1]){
                int gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }

    printf("\n\nDuzgun siralanmis dizi:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", dizi[i]);
    }
    return 0;
}
