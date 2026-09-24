#include <stdio.h>
#include <stdlib.h>

// 1. GLOBAL DEĞİŞKENLER
int bakiye = 0;
int toplam_gelir = 0;
int toplam_gider = 0;

// Stok Bilgileri (Şimdilik tek bir ürün tutuyoruz)
char isim[20] = "Yok";
int kilogram = 0;

// 2. MODÜLLER (Fonksiyonlar)

void para_goster() {
    printf("\n--- GUNCEL BAKIYE ---\n");
    printf("Mevcut Bakiyeniz: %d TL\n", bakiye);
}

void para_ekle() {
    int ekle;
    printf("\nEklemek istediginiz sermayeyi giriniz: ");
    scanf("%d", &ekle);
    bakiye = bakiye + ekle;
    toplam_gelir = toplam_gelir + ekle;
    printf("Islem basarili! Yeni bakiyeniz: %d TL\n", bakiye);
}

void para_cekme() {
    int cekme;
    printf("\nCekmek istediginiz tutari giriniz: ");
    scanf("%d", &cekme);

    if(cekme > bakiye) {
        printf("HATA: Kasada yeterli bakiye yok!\n");
    } else {
        bakiye = bakiye - cekme;
        printf("Islem basarili! Yeni bakiyeniz: %d TL\n", bakiye);
    }
}

void stok_durumu() {
    printf("\n--- DEPODAKI STOK DURUMU ---\n");
    if (kilogram <= 0) {
        printf("Depo su an BOS.\n");
    } else {
        printf("Urun Ismi: %s\n", isim);
        printf("Mevcut Miktar: %d kg\n", kilogram);
    }
}

void stok_alimi() {
    int alis_fiyati, alinan_kg;
    printf("\n--- STOK ALIMI (MAL GIRISI) ---\n");
    printf("Aldiginiz malin ismini giriniz (Bosluksuz): ");
    scanf("%s", isim);
    printf("Kac kilogram aldiniz: ");
    scanf("%d", &alinan_kg);
    printf("Kilogram basina alis fiyati nedir (TL): ");
    scanf("%d", &alis_fiyati);

    int toplam_maliyet = alinan_kg * alis_fiyati;

    if(toplam_maliyet > bakiye) {
        printf("HATA: Bakiyeniz yetersiz! (Gereken: %d TL, Bakiye: %d TL)\n", toplam_maliyet, bakiye);
    } else {
        bakiye = bakiye - toplam_maliyet;
        toplam_gider = toplam_gider + toplam_maliyet;
        kilogram = kilogram + alinan_kg; // Depoya malı ekle
        printf("BASARILI: %d kg %s depoya eklendi.\n", alinan_kg, isim);
        printf("Kasadan %d TL cikti yapildi.\n", toplam_maliyet);
    }
}

void satis_yap() {
    int satilan_kg, satis_fiyati;
    printf("\n--- MAL SATISI (CIKIS) ---\n");

    if (kilogram <= 0) {
        printf("HATA: Satilacak mal yok, depo bos!\n");
        return; // Fonksiyondan çık
    }

    printf("Depodaki %s malindan kac kg satmak istiyorsunuz? (Mevcut: %d kg): ", isim, kilogram);
    scanf("%d", &satilan_kg);

    if (satilan_kg > kilogram) {
        printf("HATA: Depoda o kadar mal yok!\n");
    } else {
        printf("Kilogram basina satis fiyatini giriniz (TL): ");
        scanf("%d", &satis_fiyati);

        int satis_geliri = satilan_kg * satis_fiyati;

        kilogram = kilogram - satilan_kg; // Malı depodan düş
        bakiye = bakiye + satis_geliri;   // Parayı kasaya ekle
        toplam_gelir = toplam_gelir + satis_geliri; // Toplam geliri artır

        printf("BASARILI: %d kg %s satildi!\n", satilan_kg, isim);
        printf("Kasaya %d TL eklendi.\n", satis_geliri);
    }
}

void zarar_durumu() {
    printf("\n--- KAR / ZARAR DURUMU ---\n");
    printf("Kasaya Giren Toplam Sermaye ve Satis Geliri: %d TL\n", toplam_gelir);
    printf("Mal Alimi Icin Harcanan (Gider): %d TL\n", toplam_gider);

    int net_durum = toplam_gelir - toplam_gider;

    if(net_durum > 0) {
        printf("NET DURUM: +%d TL (Kardasiniz)\n", net_durum);
    } else if (net_durum < 0) {
        printf("NET DURUM: %d TL (Zarardasiniz / Iceridesiniz)\n", net_durum);
    } else {
        printf("NET DURUM: 0 TL (Ne Kar Ne Zarar)\n");
    }
}

// 3. ANA MOTOR
int main() {
    int giris;

    while(1) {
        printf("\n================================\n");
        printf("  MUHASEBE PROGRAMINA HOSGELDINIZ \n");
        printf("================================\n");
        printf("1- GUNCEL BAKIYE\n");
        printf("2- STOK ALIMI (Mal Girisi)\n");
        printf("3- MAL SATISI (Mal Cikisi)\n");
        printf("4- STOK DURUMUNU GOR\n");
        printf("5- KAR / ZARAR DURUMU\n");
        printf("6- BAKIYE EKLE (Sermaye)\n");
        printf("7- PARA CEKME\n");
        printf("8- CIKIS YAP\n");
        printf("================================\n");
        printf("Lutfen bir islem seciniz: ");

        scanf("%d", &giris);

        if(giris == 1) { para_goster(); }
        else if(giris == 2) { stok_alimi(); }
        else if(giris == 3) { satis_yap(); }
        else if(giris == 4) { stok_durumu(); }
        else if(giris == 5) { zarar_durumu(); }
        else if(giris == 6) { para_ekle(); }
        else if(giris == 7) { para_cekme(); }
        else if(giris == 8) {
            printf("Sistemden guvenle cikis yapildi. Iyi gunler!\n");
            break;
        }
        else {
            printf("HATA: Gecersiz secim. Lutfen 1-8 arasi girin.\n");
        }
    }

    return 0;
}
