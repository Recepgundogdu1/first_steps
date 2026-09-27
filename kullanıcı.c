#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct musteri {
    char sehir[10];
    int borc;
    char isim[20];
};



int main() {
    struct musteri musteriler[2];
    struct musteri musteri1;
    struct musteri musteri2;



    for (int i=0;i<1;i++) {
        printf("Merhaba eklemek istediginiz musteri isimi giriniz");
    scanf(" %s",musteri1.isim);
    printf("Merhaba eklemek istediginiz kisinin sehrini girinizz");
    scanf(" %s",musteri1.sehir);
    printf("Merhaba eklemek istediginiz kisinin borcunu giirniz");
    scanf(" %d",&musteri1.borc);

    }


    for (int i=0;i<1;i++) {

        printf("Merhaba eklemek istediginiz musteri isimi giriniz");
        scanf(" %s",musteri2.isim);
        printf("Merhaba eklemek istediginiz kisinin sehrini girinizz");
        scanf(" %s",musteri2.sehir);
        printf("Merhaba eklemek istediginiz kisinin borcunu giirniz");
        scanf(" %d",&musteri2.borc);
    }
    printf("merhaba ilk musteri ismi %s sehri:%s ve borcu %d tl \n",musteri1.isim,musteri1.sehir,musteri1.borc);
    printf("merhaba ikinci musteri ismi %s sehri:%s ve borcu %d tl",musteri2.isim,musteri2.sehir,musteri2.borc);
}
