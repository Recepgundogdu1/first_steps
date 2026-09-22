#include <stdio.h>

int main() {


    printf("BANKACİLİK UYGULAMASİNA HOSGELDİNİZ\n");


    int secim=0;


    int bakiye =1000;

    while (secim!=4 ) {
        printf("1-para yatirma    2-para cekme     3-bakiye gosterme     4-cıkıs yapmak ");

        scanf("%d",&secim);
        if (secim==1) {
            printf("yatıtmak istediğiniz tutarı giriniz");
            int tutar;
            scanf("%d",&tutar);
            bakiye=bakiye+tutar;
            printf("yeni bakiyeniz %d \n",bakiye);


        }
        else if (secim==2) {

            int cekme;
            printf("çekmek istediğiniz tutarı giriniz ");
            scanf("%d",&cekme);
            bakiye=bakiye-cekme;
            printf("yeni bakiyeniz %d",bakiye);


        }
        else if (secim==3) {
            printf("bakiyeniz:  %d",bakiye);

        }


    }

    return 0;
}
