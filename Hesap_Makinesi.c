#include<stdio.h>

int main(){
    int islem, sayi1, sayi2, anahtar = 1;

    printf("\n==========================================\n");
    printf("Hosgeldiniz\n\n");
    printf("[1]Toplama Islemi\n[2]Cikarma Islemi\n[3]Carpma Islemi\n[4]Bolme Islemi\n[5]Mod Alma\n[6]Programi Kapat\n");
    printf("==========================================\n");

    math:
    printf("Lutfen Yapmak Istediginiz Islemi Seciniz: ");
    scanf("%d", &islem);

    while(anahtar != 0){

        switch(islem){

            case 1:
                printf("Lutfen ilk sayiyi giriniz: ");
                scanf("%d", &sayi1);
                printf("Lutfen ikinci sayiyi giriniz: ");
                scanf("%d", &sayi2);

                printf("Islem sonucu: %d\n", sayi1 + sayi2);
                goto math;


            case 2:
                printf("Lutfen ilk sayiyi giriniz: ");
                scanf("%d", &sayi1);
                printf("Lutfen ikinci sayiyi giriniz: ");
                scanf("%d", &sayi2);

                printf("Islem sonucu: %d\n", sayi1 - sayi2);
                goto math;


            case 3:
                printf("Lutfen ilk sayiyi giriniz: ");
                scanf("%d", &sayi1);
                printf("Lutfen ikinci sayiyi giriniz: ");
                scanf("%d", &sayi2);

                printf("Islem sonucu: %d\n", sayi1 * sayi2);
                goto math;


            case 4:
                printf("Lutfen ilk sayiyi giriniz: ");
                scanf("%d", &sayi1);
                printf("Lutfen ikinci sayiyi giriniz: ");
                scanf("%d", &sayi2);

                printf("Islem sonucu: %.4f\n", (float) sayi1/sayi2);
                goto math;


            case 5:
                printf("Lutfen ilk sayiyi giriniz: ");
                scanf("%d", &sayi1);
                printf("Lutfen ikinci sayiyi giriniz: ");
                scanf("%d", &sayi2);

                printf("Islem sonucu: %d\n", sayi1%sayi2);
                goto math;

            case 6:
                printf("\nProgramdan Cikildi!\n");
                anahtar = 0;
        }
    }
    return 0;
}
