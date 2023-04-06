#include<stdio.h>

int main(){
    printf("Bir cumle giriniz:");
    int i = 0;
    char ch = getchar(), cumle[100];
    while (ch != 10) {
        cumle[i++]  = ch;
        ch = getchar();
    }
    for (int j = i - 1; j >= 0; j--) printf("%c", cumle[j]);
    return 0;
}
