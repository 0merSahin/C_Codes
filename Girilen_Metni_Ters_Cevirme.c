#include <stdio.h>

int main(){
    char kelime[100];
    int sayac =- 1;
    int k = 1;

    printf ("Lutfen bir kelime giriniz: ");
    gets (kelime);

    for (int i = 0; k == 1; i++){
        if (kelime[i] == '\0') k = 0;
        sayac++;  //kelimenin uzunluðu
    }

    for (int i = sayac - 1; i >- 1; i--) printf ("%c", kelime[i]);

    return 0;
}
