#include<stdio.h>

int main(){

    int sayi, kontrol=0;

    printf("Lutfen asali alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 2) {
        printf("Girdiğiniz sayi asal değildir.\n");
        return 0;
    }

    //i'yi 2 den başlatmamız gerekmekte. Çünkü sıfırdan veya 1 den başlatırsak her sayı 0'a ve 1'e bölneceğinden doğru cevabı bulamayız.
    for (int i = 2; i < sayi; i++){  
        if(sayi % i == 0){
            kontrol = 1;
            break;
        }
    }

    if (kontrol == 1) printf("%d sayisi asal sayi degildir.\n", sayi);
    else printf("%d sayisi asal sayidir.\n", sayi);
    
    return 0;
}
