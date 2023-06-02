#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Tree Structure:
typedef struct tree {
    int nmbr;
    struct tree *left;
    struct tree *right;
} tree;


void CreateBinaryTree (tree *root);
void PrintTree (tree *iter);

int main(int argc, const char * argv[]) {
    tree *root = (tree *) malloc(sizeof(tree));
    CreateBinaryTree(root);
    printf("\n\nGenerated binary tree elements (small to large): \n");
    PrintTree(root);
    return 0;
}


void CreateBinaryTree (tree *root) {
    srand((int) time(NULL));
    
    tree *iter = root;
    tree *before = NULL;
    iter->nmbr = rand() % 100 + 1;
    iter->left = NULL;
    iter->right = NULL;
    
    for (int i = 0; i < 10; i++) {
        int nmbr = rand() % 100 + 1, control = -1;
        
        while (iter != NULL) {
            before = iter;
            if (nmbr < iter->nmbr) {
                iter = iter->left;
                control = 1;
            }
            else {
                iter = iter->right;
                control = 2;
            }
        }
        
        if (control == 1) {
            iter = before;
            iter->left = (tree *) malloc(sizeof(tree));
            iter = iter->left;
            iter->nmbr = nmbr;
            iter->left = NULL;
            iter->right = NULL;
        }
        else if (control == 2) {
            iter = before;
            iter->right = (tree *) malloc(sizeof(tree));
            iter = iter->right;
            iter->nmbr = nmbr;
            iter->left = NULL;
            iter->right = NULL;
        }
        else {
            printf("There is an error in the program!");
            return;
        }
        iter = root;
    }
}


void PrintTree (tree *iter) {
    if (iter == NULL) return;
    PrintTree(iter->left);
    printf("%d ", iter->nmbr);
    PrintTree(iter->right);
}
