#include <stdio.h>
#include <stdlib.h>

typedef struct ciftyonliste {
    int sayi;
    struct ciftyonliste *next;
    struct ciftyonliste *before;
}ciftyonliste;


int main(){

    ciftyonliste *root;
    ciftyonliste *iter;
    ciftyonliste *son;

    root = (ciftyonliste *) malloc(sizeof(ciftyonliste));
    root->before = NULL;
    root->next = NULL;
    iter=root;
    iter->sayi = 10;

    for (int i=2;i<6;i++){
        iter->next = (ciftyonliste *) malloc(sizeof(ciftyonliste));
        iter->next->before = iter;
        iter=iter->next;
        iter->sayi = i*10;
        iter->next = NULL;
        printf("Dongu dondu\n");
    }

    iter=root;
    printf("\nBastan yazdirma\n");
    while (iter!=NULL){
        printf("%d ",iter->sayi);
        son=iter;
        iter=iter->next;
    }

    printf("\n\nSondan yazdirma\n");

    iter=son;
    while (iter!=NULL){
        printf("%d ",iter->sayi);
        iter=iter->before;
    }

    return 0;
}
