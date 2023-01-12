#include<stdio.h>

int main(){
    int numara = 123, bakiye = 3000, gunlimit = 1000, islem = 0, tutar;

    printf("Hosgeldiniz.\n");
    printf("Lutfen musteri numaranizi giriniz: ");
    scanf("%d", &numara);

    if (numara != 123){
        printf("Hatali numara girdiniz!");
        return 0;
    }

    if (numara == 123){
        printf("================================");
        printf("\n*****ISLEMLER*****\n");
        printf("[1]Para Cekme\n[2]Para Yatirma\n[3]Bakiye Sorgulama\n[4]Kart Iade\n");
        printf("Bakiyeniz: %d", bakiye);
        printf("\n================================\n");
        printf("Lutfen yapmak istediginiz islemi seciniz: ");
        scanf("%d", &islem);
    }

    switch(islem){
        case 1:
            printf("\nLutfen cekmek istediginiz tutari giriniz: ");
            scanf("%d", &tutar);

            if (tutar > bakiye){
                printf("Bakiyenizde bu kadar para bulunmamakta!\nBakiyeniz: %d", bakiye);
                break;
            }
            else if (tutar > gunlimit){
                printf("Gunluk limitten daha fazla para cekemezsiniz!\nGunluk limit: %d", gunlimit);
                break;
            }
            else if (tutar <= gunlimit){
                bakiye -= tutar;
                printf("Yeni bakiyeniz: %d", bakiye);
                break;
            }

        case 2:
            printf("Lutfen yatirmak istediginiz miktari giriniz: ");
            scanf("%d", &tutar);
            bakiye += tutar;
            printf("Yeni Bakiyeniz: %d", bakiye);
            break;

        case 3:
            printf("Bakiyeniz: %d", bakiye);
            break;

        case 4:
            printf("Hoscakalin..");
            break;

        default:
            printf("Yanlis bir islem yaptiniz!");
    }
    return 0;
}
