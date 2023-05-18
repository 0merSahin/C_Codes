#include<stdio.h>

int main(){

    // Simertrik bir matris:
    int control = 1, matris[3][3]={{1,3,3},{3,1,3},{3,3,1}};

    // Yazdirma:
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) printf("\t%d", matris[i][j]);
        printf("\n");
    }

    // Kontrol:
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matris[i][j] != matris[j][i]){
                control = 0;
                break;
            }
        }
    }

    if (control == 0) printf("\nBu matris simetrik degildir!");
    else printf("\nBu matris simetriktir!");
    return 0;
}
