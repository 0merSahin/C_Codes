#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Cift Yonlu bagli liste:
typedef struct liste{
    int No;
    char Isim[20];
    char Soyisim[20];
    struct liste *next;
    struct liste *before;
}liste;


// Fonksiyonlar:
void H_Yaz (liste *iter, int sayi, char isim[], char soyisim[]);
void H_Listele (liste *iter, int mod);
int H_Arama (liste *iter, int aranan);
int H_Silme (liste *iter, int aranan);


int main(int argc, const char * argv[]) {

    int boyut;
    sorgu:
    printf("Tablo boyutunu giriniz: ");
    scanf("%d", &boyut);
    if (boyut < 1 || boyut > 9) {
        printf("\nLütfen 1 ile 9 arasında bir boyut girin!\n\n");
        goto sorgu; // 5 satır yukarı gönderiyor.
    }


    // Yazma fonksiyonu algoritması:
    liste *root[boyut]; // Butun listelerin root'larini tutan dizi.
    for (int i = 0; i < boyut; i++) {
        root[i] = malloc(sizeof(liste));
        root[i]->No = -1;
    }
    int numara, mod;
    char isim[20], soyisim[20];
    FILE *dosya = fopen("Personeller.txt", "r");
    while (!feof(dosya)) {
        fscanf(dosya, "%d\t%s\t%s\n", &numara, isim, soyisim);
        mod = numara % boyut;
        H_Yaz(root[mod], numara, isim, soyisim);
    }


    // root'ları düzenliyor:
    for (int i = 0; i < boyut; i++) {
        liste *iter = root[i];
        while (iter->before != NULL) iter = iter->before;
        root[i] = iter;
    }


    // Yazdırma:
    for (int i = 0; i < boyut; i++) H_Listele(root[i], i);


    // Arama:
    int aranan, kontrol1 = 0;
    printf("\n\nAranan personel numarasini giriniz: ");
    scanf("%d", &aranan);
    for (int i = 0; i < boyut; i++) {
        int indis = H_Arama(root[i], aranan);
        if (indis > -1) {
            printf("\n--> Aradiginiz personel, %d numarali listede %d. sirada bulundu.\n\n\n", i, indis + 1);
            kontrol1 = 1;
            break;
        }
    }
    if (kontrol1 == 0) printf("\n--> Aradiginiz personel hicbir listede bulunamadi!\n\n\n");


    // Silme:
    int kontrol2 = 0;
    printf("Silmek istediginiz personel numarasini giriniz: ");
    scanf("%d", &aranan);
    for (int i = 0; i < boyut; i++) {
        int kontrol1 = H_Silme(root[i], aranan);
        if (kontrol1 > 0) {
            if (kontrol1 == 1) root[i] = root[i]->next;
            printf("\n\n--> %d numarali personel silindi.\n", aranan);
            kontrol2 = 1;
            break;
        }
    }
    if (kontrol2 == 0) printf("\n--> Personel bulunamadi!\n\n");


    // Yazdırma:
    for (int i = 0; i < boyut; i++) H_Listele(root[i], i);


    printf("\n\n");
    return 0;
}



/* FONKSİYONLAR: */

void H_Yaz (liste *root, int numara, char isim[], char soyisim[]) {
    int kontrol = 0;
    liste *iter = root;

    if (iter->No == -1) {
        iter->No = numara;
        strcpy(iter->Isim, isim);
        strcpy(iter->Soyisim, soyisim);
        iter->next = NULL;
        iter->before = NULL;
    }
    else {
        while (iter != NULL) {
            if (iter->No > numara) { // araya ekleme: (iter'in başına)
                liste *gecici = malloc(sizeof(liste));
                gecici->No = numara;
                strcpy(gecici->Isim, isim);
                strcpy(gecici->Soyisim, soyisim);
                gecici->next = iter;
                if (iter == root) { // başa eklenecek:
                    gecici->before = NULL;
                    iter->before = gecici;
                }
                else {
                    gecici->before = iter->before;
                    iter->before->next = gecici;
                    iter->before = gecici;
                }
                kontrol = 1;
                break;
            }
            iter = iter->next;
        }
        iter = root;
        if (kontrol == 0) { // en sona ekleme:
            while (iter->next != NULL) iter = iter->next;
            iter->next = malloc(sizeof(liste));
            iter->next->before = iter;
            iter = iter->next;
            iter->No = numara;
            strcpy(iter->Isim, isim);
            strcpy(iter->Soyisim, soyisim);
            iter->next = NULL;
        }
    }
}



void H_Listele (liste *iter, int mod) {
    printf("\n[%d] ", mod);
    while (iter != NULL) {
        if (iter->No == -1) break;
        printf("-> %d ", iter->No);
        iter = iter->next;
    }
}



int H_Arama (liste *iter, int aranan) {
    int sayac = 0;
    while (iter != NULL) {
        if (iter->No == aranan) return sayac;
        sayac++;
        iter = iter->next;
    }
    return -1;
}



int H_Silme (liste *root, int aranan) {
    liste *iter = root;
    while (iter != NULL) {
        if (iter->No == aranan) {
            if (iter == root) { // baştan silme: (sonrasında eleman var ise)
                if (iter->next != NULL) {
                    iter = iter->next;
                    iter->before = NULL;
                    return 1; // root 1 kaydırılacak!
                }
                else { // baştan silme: (sonrasında eleman yok ise)
                    iter->next = malloc(sizeof(liste));
                    iter = iter->next;
                    iter->No = -1;
                    return 1; // root 1 kaydırılacak!
                }
            }
            else { // aradan veya sondan silme:
                if (iter->next == NULL) { // Sondan silme:
                    iter = iter->before;
                    iter->next = NULL;
                    return 3; // root hareket ettirilmeyecek!
                }
                else { // Aradan silme:
                    iter->before->next = iter->next;
                    iter->next->before = iter->before;
                    return 4; // root hareket ettirilmeyecek!
                }
            }
        }
        iter = iter->next;
    }
    return 0; // Aranan numara bulunamadı!
}
