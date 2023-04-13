#include<stdio.h>

int main(){
    int satir, sutun;

    printf("Lutfen satir girin: ");
    scanf("%d",&satir);
    printf("Lutfen sutun giriniz: ");
    scanf("%d",&sutun);

    for (int i = 0; i < sutun; i++){
        printf("*");
    }

    printf("\n");
    for (int i = 0; i < satir - 2; i++){
        printf("*");
        for (int j = 0; j < sutun - 2; j++){
            printf(" ");
        }
        printf("*\n");
    }

    for (int i = 0; i < sutun; i++){
        printf("*");
    }

    return 0;
}
