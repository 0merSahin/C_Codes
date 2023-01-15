#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int dizi[11], aranan, sayac = 0;
    for (int i = 0; i < 10; i++) {
        dizi[i] = rand() % 10 + 1;
        printf("%d ", dizi[i]);
    }

    printf("\n\nBulamk istediginiz sayiyi giriniz: ");
    scanf("%d", &aranan);
    for (int i = 0; i < 10; i++) {
        sayac++;
        if (dizi[i] == aranan) {
            printf("\nAranan sayi %d. sirada bulundu.", sayac);
            return 0;
        }
    }
    printf("\nAradiginiz sayi bulunamadi!\n");
    return 0;
}
