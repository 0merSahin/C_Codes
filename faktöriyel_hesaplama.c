#include<stdio.h>

int main(){
    int sayi, faktoriyel=1;
    printf("Lutfen faktoriyeli hesaplanacak sayiyi giriniz: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; i++){
        faktoriyel *= i;
    }
    printf("%d! = %d", sayi, faktoriyel);
    return 0;
}
