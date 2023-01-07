#include <stdio.h>

int main(){
    printf("\nBu program girilen karakterin/sayinin ASCII tablo  karsiligini veriyor.\n");
    while (1){
        char karakter = getchar();
        getchar();
        printf("\n %c karakterinin ASCII karsiligi: %d",karakter,karakter);
    }
}
