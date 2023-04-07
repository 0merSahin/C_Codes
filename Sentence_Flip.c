#include <stdio.h>
#include <stdlib.h>

typedef struct liste {
    char ch;
    struct liste *next;
    struct liste *before;
} liste;

int main(){
    liste * root = malloc(sizeof(liste));
    liste * iter = root;
    iter->before = NULL;

    printf("Bir cumle giriniz: ");
    char ch = getchar();
    if (ch != 10) iter->ch = ch;
    else return 0;
    while (ch != 10) {
        ch = getchar();
        iter->next = malloc(sizeof(liste));
        iter->next->before = iter;
        iter = iter->next;
        iter->ch = ch;
        iter->next = NULL;
    }

    while (iter != NULL) {
        printf("%c", iter->ch);
        iter = iter->before;
    }

    return 0;
}
