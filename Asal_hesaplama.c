#include<stdio.h>

int main(){

    int i,sayi,bolkontrol=0;

    printf("Lutfen asali alinacak sayiyi giriniz: ");
    scanf("%d",&sayi);

    for (i=2;i<sayi;i++){  //i'yi 2 den baþlatmamýz gerekmekte. Çünkü sýfýrdan veya 1 den baþlatýrsak, her sayý 0'a ve 1'e bölneceðinden doðru cevabý bulamayýz.
        if(sayi%i==0){
            bolkontrol=1;
            break;
        }
    }
    if (bolkontrol==1){
        printf("%d sayisi asal sayi degildir.\n",sayi);
    }
    else{
        printf("%d sayisi asal sayidir.\n",sayi);
    }

    return 0;
}
