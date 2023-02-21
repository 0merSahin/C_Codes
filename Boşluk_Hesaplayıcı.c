#include<stdio.h>

int main(){
    char ch;
    int bosluksayisi = 0;

    printf("\nLutfen bir cumle yaziniz: ");
    do {
        ch = getchar();		    // Yazılan cümleden 1 karakter alıyor.
        if (ch == ' '){		    // Aldığı karakterin boşluk olup olmadığını kontrol ediyor.
            bosluksayisi++;
        }
    } while(ch != 10); 		// Ne zaman enter tuşuna basılır ise o zaman döngüyü sonlanıyor.
    printf("\nGirdiginiz cumlede %d adet bosluk vardir.\n", bosluksayisi);

    return 0;
}
