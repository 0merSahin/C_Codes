#include<stdio.h>

int main(){


    /*  Girilen sayıdan büyük 5 tane asal
     *  sayiyi bularak ekrana yazdiriyor.
     */


	int sayi,i,j,k=0;
	int kontrol;

	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);

	for (i=sayi+1;k<5;i++){
		for (j=2;j<i;j++){
			if (i%j!=0){
				kontrol=0;
			}
			else{
				kontrol=1;
				break;
			}
		}
		if (kontrol==0){
			printf(" %d ",i);
			k++;
		}
	}

	return 0;
}

