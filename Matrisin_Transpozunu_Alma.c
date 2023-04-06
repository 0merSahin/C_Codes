#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int duzmatris[5][5];
    int transpozmatris[5][5];
    srand(time(NULL));

    printf("Duzgun matris:\n\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            duzmatris[i][j] = rand() % 10;
            printf("%d ", duzmatris[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTranspoz Matris:\n\n");
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            transpozmatris[i][j] = duzmatris[j][i];
            printf("%d ", transpozmatris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
