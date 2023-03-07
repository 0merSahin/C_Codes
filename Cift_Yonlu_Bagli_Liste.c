#include <stdio.h>
#include <stdlib.h>

typedef struct liste {
    int sayi;
    struct liste *next;
    struct liste *before;
} liste;


int main(){

    liste *root = (liste *) malloc(sizeof(liste));
    liste *iter = root;
    liste *son;

    root->before = NULL;
    root->next = NULL;
    iter->sayi = 10;

    for (int i = 2; i < 6; i++){
        iter->next = (liste *) malloc(sizeof(liste));
        iter->next->before = iter;
        iter=iter->next;
        iter->sayi = i * 10;
        iter->next = NULL;
        printf("Dongu dondu\n");
    }

    iter = root;
    printf("\nBastan yazdirma\n");
    while (iter != NULL){
        printf("%d ", iter->sayi);
        son = iter;
        iter = iter->next;
    }

    printf("\n\nSondan yazdirma\n");

    iter = son;
    while (iter != NULL){
        printf("%d ", iter->sayi);
        iter = iter->before;
    }

    return 0;
}
