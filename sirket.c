#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>






struct  sirket1{
    char isim[10];
    char soyisim[20];
    int maas;
    int yas;
};




char mal[20];
int ton;
int alis;
int satis;
int maliyet;
int ciro;
int kar;
int zarar;
int menu=0;
int sifre=1234;
char admin[10]="dogan";


struct sirket1 calisan;

void calısan_ekle() {
    printf("lutfen eklemek istediginiz calisanin  ismini giriniz");
    scanf("%s",calisan.isim);
    printf("lutfen kisinin soyismini ekleyiniz");
    scanf("%s",calisan.soyisim);
    printf("lutfen kisinin maasini giriniz \n");
    scanf("%d",&calisan.maas);
    printf("lutfen kisinin yasini giriniz");
    scanf("%d",&calisan.yas);

    printf("ismi: %s soyismi: %s maasi: %d yasi: %d",calisan.isim,calisan.soyisim,calisan.maas,calisan.yas);
}




void admin_GİRİSİ() {
    printf("LUTFEN ADMİN ISMINI GIRINIZ");
    scanf("%s",admin);
    printf("LUTFEN KULLANICI SIFRESINI GIRINIZ");
    scanf("%d",&sifre);

    if (strcmp(admin, "dogan") == 0 && sifre == 1234){
        printf("TEBRIKLER ADMIN PANELINE GIRIS YAPTINIZ");
    }else {
        printf("SIFRE YA DA KULLANICI ADI YANLIS TEKRAR DENEYINIZ");
    }
}




float kar_zarar() {
    printf("merhaba önce aldiginiz malin isimlerini giriniz");
    scanf("%s",mal);
    printf("aldiginiz malin ton giriniz");
    scanf("%d",&ton);
    printf("alis fiyatini giriniz");
    scanf("%d",&alis);
    printf("malin satis fiyatini giriniz");
    scanf("%d",&satis);

    maliyet=alis*ton*1000;
    ciro=satis*ton*1000;
    kar=ciro-maliyet;
    zarar=maliyet-ciro;

    if (maliyet<ciro){

        printf("sirketin bu maldan kari :%d \n ",kar);
    }
    else if (maliyet==ciro) {
        printf("kar ve zarar etmediniz yapacagin isin aminakoyim");
    }else{
        printf("Zarar ettiniz ettiginiz zarar: \n %d",zarar);
    }
}




int main() {
    printf("**********************************");
    printf("GUNDOGDU HOLDING'E HOSGELDINIZ");
    printf("***********************************\n");
    printf("1-ADMIN GIRISI 2-TOPLAM CIRO 3-TOPLAM KAR DURUMU 4-MAL ALIS SATIS EKLEME 5-YENI CALISAN EKLEME 6-CIKIS");
    scanf("%d", &menu);

            if (menu==1) {
            admin_GİRİSİ();
            }
            else if (menu==2){
                printf("SIRKETIN TOPLAM CIROSU ISLEM HACMI : %d",maliyet);
            }
            else if (menu==3){
               printf("toplam kar:%d    toplam zarar:%d",kar,zarar);
            }
            else if (menu==4) {
                kar_zarar();
            }
            else if (menu==5) {
                calısan_ekle();
            }else {
                printf("MENUDEN CIKIYORSUNUZ....");

            }
    return 0;
        }


