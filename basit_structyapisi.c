#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct personel {

    char isim[20];
    char soyad[10];
    int maas;
    int yaş;
};

int main() {

    struct personel personel1;
        strcpy(personel1.isim,"mehmet");
        strcpy(personel1.soyad,"gundogdy");
        personel1.maas=100000;
        personel1.yaş=25;

        printf("Calisanin ismi %s Soyismi %s maasi %d yasi %d dir \n",personel1.isim,personel1.soyad,personel1.maas,personel1.yaş);


    struct personel personel2={"abid","gundogdu",2000,22};
    printf("\n %s ismi , %s soyismi, %d maasi, %d yasi ",personel2.isim,personel2.soyad,personel2.maas,personel2.yaş);


        return 0;


    }




