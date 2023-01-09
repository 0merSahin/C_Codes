#include<stdio.h>
#include<math.h>

int main(){
    double pi = 3.141592, yaricap, alan;
    printf("Lutfen ucgenin yaricapini giriniz: "),
    scanf("%lf", &yaricap);

    alan = pi * (pow(yaricap, 2));
    printf("Ucgenin alani: %.4f", alan); // Virgülden sonra 4 basamak yazdıracak!

    return 0;
}
