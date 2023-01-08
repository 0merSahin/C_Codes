#include<stdio.h>

int main(){
    int i, j, k, buyukluk, degisken, kontrol;
    printf("Lutfen ucgenin buyuklugunu giriniz: ");
    scanf("%d", &buyukluk);

    degisken = buyukluk;
    kontrol = 1;
    for (i = 0; i < buyukluk; i++){
        for (j = (degisken - 1); j >= 0; j--) printf(" ");
        for (k = 0; k < kontrol; k++) printf("*");
        printf("\n");
        kontrol++;
        degisken--;
    }
    return 0;
}
