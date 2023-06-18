#include<stdio.h>

int main(){
	int newpiramit;
	int kontrol, kontrol2;
	printf("\nLutfen piramit buyuklugunu giriniz: ");
	scanf("%d", &newpiramit);
	int piramit = newpiramit;
	int piramit_1 = newpiramit;
	int piramit_2 = newpiramit;
	int piramit_3 = newpiramit;
	printf("\n");

// Dik ucgen:
	for (int i = 1; i <= piramit; i++){
		for (int j = 0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n\n");

// Ters dik ucgen:
	for (int i = 1; i <= newpiramit; i++){
		for (int j = piramit_1; j <= piramit_1 && j > 0; j--){
			printf("*");
		}
		piramit_1-=1;
		printf("\n");
	}	
	printf("\n\n\n");

// Ters iki kat buyuk piramit:
	for (int i = 1; i <= newpiramit; i++){
		for (int j = piramit_2; j <= piramit_2 && j > 0; j--){
			printf("**");
		}
		piramit_2 -= 1;
		printf("\n");
	}	
	printf("*");
	printf("\n\n\n\n\n");

// Piramit:	
	kontrol = piramit_3;
	kontrol2 = 1;
	for (int j = 1; j <= newpiramit; j++){
		for (int a = 1; a < kontrol; a++){
			printf(" ");
		}
		kontrol -= 1;
		
		for (int b = 1; b <= kontrol2; b++){
			printf("*");
		}
		kontrol2 += 2;
		printf("\n");
	}	
	printf("\n\n");
	return 0;
}
