#include <stdio.h>
#include <stdlib.h>

int dizi_toplama(int sayilar[], int size) {
    int toplam = 0;
    for (int i = 0; i < size; i++) {
        toplam = toplam + sayilar[i];
    }
    return toplam;
}

int asalsayibulma(int sayi2) {
    for (int i = 2; i < sayi2; i++) {
        if (sayi2 % i == 0) {
            return i;
        }
    }
    return 0;
}

// Diziyi kontrol eden fonksiyon
void katli3_kontrol(int katlar[], int size) {
    for (int i = 0; i < size; i++) {
        if (katlar[i] % 3 == 0) {
            printf("%d sayisi 3'un katidir.\n", katlar[i]);
        } else {
            printf("%d sayisi 3'un kati degildir.\n", katlar[i]);
        }
    }
}

int main() {
    int dizi[4] = {2, 3, 4, 5};
    int dizi2[5] = {1, 2, 3, 4, 5};

    printf("İKİNCİ DİZİNİN SAYİLARİNİN TOPLAMİ :%d \n", dizi_toplama(dizi2, 5));
    printf("İLK DİZİDEKİ SAYİLARİNİN TOPLAMİ %d \n", dizi_toplama(dizi, 4));

    // Diziyi fonksiyona gönderiyoruz
    printf("\n--- 3'un Kati Kontrolu ---\n");
    katli3_kontrol(dizi, 4);

    return 0;
}
