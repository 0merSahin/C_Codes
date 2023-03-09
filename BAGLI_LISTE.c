#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct node {
    int data;
    struct node *next;
} node;



node * WriteNode (void);
void PrintNode (node *root);

int main() {
    node *root = WriteNode();
    PrintNode(root);
    return 0;
}



node * WriteNode (void) {
    srand(time(NULL));
    node *root = (node *) malloc(sizeof(node));
    node *iter = root;
    iter->data = rand() % 10 + 1;

    for (int i = 1; i < 5; i++) {
        iter->next = malloc(sizeof(node));
        iter = iter->next;
        iter->data = rand() % 10 + 1;
    }
    iter->next = NULL;

    return root;
}



void PrintNode (node *root) {
    printf("\nOlusturulan Liste: \n");
    while (root != NULL) {
        printf("%d ", root->data);
        root = root->next;
    }
}
