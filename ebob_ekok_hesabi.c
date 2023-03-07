#include<stdio.h>

int main(){
    int sayi1,sayi2;
    int buyuksayi,kucuksayi;

    printf("Lutfen ebob ve ekok'u hesaplanacak 2 sayi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    if (sayi1 >= sayi2) {
        buyuksayi = sayi1;
        kucuksayi = sayi2;
    }
    else { // sayi1 < sayi2:
        buyuksayi = sayi2;
        kucuksayi = sayi1;
    }

// Ebob hesaplama:
    for (int i = buyuksayi; i > 0; i--) {
        int mod1 = buyuksayi % i;
        int mod2 = kucuksayi % i;
        if (mod1 == 0 && mod2 == 0){
            printf("\nGirdiginiz sayilarin ebob'u: %d", i);
            break;
        }
    }

// Ekok hesaplama:
    for (int i = buyuksayi; i > 0; i++) {
        int mod1 = i % buyuksayi;
        int mod2 = i % kucuksayi;
        if (mod1 == 0 && mod2 == 0) {
            printf("\nGirdiginiz sayilarin ekok'u: %d", i);
            break;
        }
    }

    return 0;
}
