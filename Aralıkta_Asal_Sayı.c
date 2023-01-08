#include<stdio.h>

int main(){
	int sayi1, sayi2, i, j, control = 0;
	printf("Lutfen bir aralik giriniz: ");
	scanf("%d %d", &sayi1, &sayi2);

	for (i = sayi1 + 1; i < sayi2; i++){
		for (j = 2; j < i - 1; j++){
			if (i % j == 0){
				control = 1;
			}
		}
		if (control == 0){
			printf(" %d ", i);
		}
		control = 0;
	}

	return 0;
}
