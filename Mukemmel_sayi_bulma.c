#include<stdio.h>
// Girilen aralıktaki mükemmel sayıları buluyor.

void mukemmel_bulma(int alt,int ust);
int main(){
    int alt, ust;
    printf("Lutfen bir aralik giriniz: ");
    scanf("%d %d", &alt, &ust);
    mukemmel_bulma(alt, ust);
    return 0;
}

void mukemmel_bulma(int alt, int ust){
    int toplam=0, kontrol=0;
    printf("\n\nGirdiginiz araliktaki Mukemmel sayilar: ");
    for (int i = alt; i <= ust; i++){
        for (int j = 1; j < i; j++){
            if (i % j == 0) toplam += j;
        }
        if (toplam == i){
            printf(" %d ", i);
            kontrol = 1;
        }
        toplam = 0;
    }
    if (kontrol == 0) printf("  Girdiginiz aralikta hic mukemmel sayi bulunamamistir! ");
}
