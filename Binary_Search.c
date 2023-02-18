#include<stdio.h>

/* Fonksiyon kullanımı + Ikili arama */

void binary_search(int dizi[], int aranan, int miktar);
void sayi_bulundu(int orta);

int main() {
    int i, dizi[100], aranan, miktar;

    printf("Kac tane sayi girmek istiyorsunuz: ");
    scanf("%d", &miktar);

    printf("Lutfen sayilari giriniz\n");

    for (i = 0; i < miktar; i++){
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    printf("Hangi sayiyi bulmak istiyorsunuz: ");
    scanf("%d", &aranan);
    binary_search(dizi, aranan, miktar);

    return 0;
}


void binary_search(int dizi[], int aranan, int miktar) {
    int alt = 0, i;
    int ust = miktar - 1;
    int orta = (alt + ust) / 2;

    for (i = 0; i < miktar / 3; i++){
        if (dizi[orta] == aranan) {
            sayi_bulundu(orta);
            return;
        }
        if (dizi[orta] < aranan) {
            alt = orta;
            orta = (ust + alt) / 2;
        }
        if (dizi[orta]>aranan) {
            ust = orta;
            orta = (ust + alt) / 2;
        }
    }
    printf("\nAranan sayi bulunamadi.\n");
}

void sayi_bulundu(int orta) {
    printf("\nAradiginiz sayi %d. sirada bulunmustur.\n", orta + 1);
}
