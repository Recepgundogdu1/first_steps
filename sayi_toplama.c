#include <stdio.h>
#include <stdlib.h>
#include <string.h>








//1 den 100 e kadar olan sayilarin toplamı 

int main() {


    int toplam=0;
    int i =0;
    for (int i=0;i<=100;i++) {
        toplam += i;
    }
    printf("sonuc: %d",toplam);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>









//girilen 3 sayiden en kucugunu bulma


int main() {

    int ilk,iki,uc;


    printf("MERHABALAR LUTFEN 3 SAYIYI SIRAYLA GIRINIZ  \n");
    printf("lutfen ilk sayiyiy giriniz ");
    scanf("%d",&ilk);
    printf("lutfen ikinci sayiyi giriniz");
    scanf("%d",&iki);
    printf("lutfen ucuncu sayiyi giriniz ");
    scanf("%d",&uc);

    if (ilk>iki && ilk>uc) {
        printf("en buyuk sayi ilk sayidir ");
    }
    if (iki>ilk && iki>uc) {
        printf("en buyuk sayi ikinci sayidir  ");
    }
    if (uc>iki && uc>ilk) {
        printf("en buyuk sayi ucuncu sayidir ");
    }


}
