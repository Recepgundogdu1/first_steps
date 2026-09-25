#include <stdio.h>
#include <stdlib.h>

struct sirket {
    char isim[20];
    char soyisim[20];
    int yas;
    int maas;
    char sehir[30];
};

void sorusor() {
    struct sirket personel3;

    printf("--- YENI PERSONEL KAYDI ---\n");
    printf("Isim, Soyisim, Yas, Maas ve Sehir bilgilerini aralarinda BOSLUK birakarak giriniz:\n");

    scanf("%s %s %d %d %s", personel3.isim, personel3.soyisim, &personel3.yas, &personel3.maas, personel3.sehir);

    printf("\n>>> Basariyla kayit eklendi <<<\n");
    printf("Calisanin ismi: %s \nSoyismi: %s \nYasi: %d \nMaasi: %d \nSehri: %s \n",
           personel3.isim, personel3.soyisim, personel3.yas, personel3.maas, personel3.sehir);
}

int main() {
    sorusor();

    struct sirket nesne;

    printf("\nLutfen personel isim giriniz: ");
    scanf("%s", nesne.isim);

    printf("Lutfen personel soyisim giriniz: ");
    scanf("%s", nesne.soyisim);

    printf("Lutfen personel yasi giriniz: ");
    scanf("%d", &nesne.yas);

    printf("Lutfen personel maasi giriniz: ");
    scanf("%d", &nesne.maas);

    printf("Lutfen personel sehri giriniz: ");
    scanf("%s", nesne.sehir);

    printf("\n--- IKINCI PERSONEL BILGILERI ---\n");
    printf("Isim: %s | Soyisim: %s | Yas: %d | Maas: %d | Sehir: %s\n",
           nesne.isim, nesne.soyisim, nesne.yas, nesne.maas, nesne.sehir);

    return 0;
}
