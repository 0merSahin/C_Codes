#include <stdio.h>

int main()
{
    int secim;
    do {
        secim = getchar();
        switch(secim) {
            case 48:
                printf("sifir\n");
                break;
            case 49:
                printf("bir\n");
                break;
            case 50:
                printf("iki\n");
                break;
            case 51:
                printf("uc\n");
                break;
            case 52:
                printf("dort\n");
                break;
            case 53:
                printf("bes\n");
                break;
            case 54:
                printf("alti\n");
                break;
            case 55:
                printf("yedi\n");
                break;
            case 56:
                printf("sekiz\n");
                break;
            case 57:
                printf("dokuz\n");
                break;
            case 58:
                printf("on\n");
                break;
            default :
                printf("---\n");
        }
    } while(secim != 27);

    return 0;
}
