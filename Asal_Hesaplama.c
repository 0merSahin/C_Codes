#include<stdio.h>

int main(){

    int sayi,kontrol=0;

    printf("Lutfen asali alinacak sayiyi giriniz: ");
    scanf("%d",&sayi);

    if (sayi < 2) {
        printf("Girdiğiniz sayi asal değildir.\n");
        return 0;
    }

    for (int i=2;i<sayi;i++){  //i'yi 2 den baþlatmamýz gerekmekte. Çünkü sýfýrdan veya 1 den baþlatýrsak, her sayý 0'a ve 1'e bölneceðinden doðru cevabý bulamayýz.
        if(sayi%i==0){
            kontrol=1;
            break;
        }
    }

    if (kontrol==1){
        printf("%d sayisi asal sayi degildir.\n",sayi);
    }
    else{
        printf("%d sayisi asal sayidir.\n",sayi);
    }

    return 0;
}
