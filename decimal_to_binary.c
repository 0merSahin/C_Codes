#include<stdio.h>

int main(){
	int sayi1, sayi2, i = 1;
    long long int toplam = 0;

	printf("Lutfen bit düzeyine çevirmek istediginiz sayiyi giriniz: ");
	scanf("%d", &sayi1);
    sayi2 = sayi1;

	while (sayi2 != 0){
		int mod = sayi2 % 2;
        sayi2 = sayi2 / 2;
        toplam += mod * i;
	    i *= 10;
    }
	printf("%d sayisinin bit duzeyindeki karsiligi: %lld", sayi1, toplam);

	return 0;
}
