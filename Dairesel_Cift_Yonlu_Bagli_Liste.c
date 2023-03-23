#include <stdio.h>
#include <stdlib.h>

typedef struct daireselListe {
    int sayi;
    struct daireselListe *next;
    struct daireselListe *before;
} daireselListe;

int main() {

    daireselListe *root;
    daireselListe *iter;
    daireselListe *son;

    root = (daireselListe *) malloc(sizeof(daireselListe));
    root->before = NULL;
    root->next = NULL;
    root->sayi = 10;
    iter = root;

    for (int i=2;i<7;i++){
        iter->next = (daireselListe *) malloc(sizeof(daireselListe));
        iter->next->before = iter;
        iter = iter->next;
        son = iter;
        iter->sayi = i * 10;
        iter->next = NULL;
    }

    son->next = root;
    root->before = son;

    iter = root;
    printf ("\nDuz yazdirma:\n");
    for (int i = 0; i < 20; i++){
        printf ("%d ", iter->sayi);
        iter = iter->next;
    }

    iter = root;
    printf ("\n\nTers yazdirma:\n");
    for (int i = 0; i < 20; i++){
        printf("%d ", iter->sayi);
        iter = iter->before;
    }


/*  DAİRESEL LİSTE OLDUĞU İÇİN İTER HİÇBİR ZAMAN NULL KARAKTERİNE GELMİYOR ve SONSUZ DÖNÜYOR:
    iter = root;
    printf ("\n\nSonsuz yazdirma:\n");
    while (iter != NULL){
        printf("%d ", iter->sayi);
        iter = iter->before;
    }
*/

    return 0;
}
