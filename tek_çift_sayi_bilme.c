#include <stdio.h>
int main() {



    printf("SAYİ BİLME UYGULAMASİNA HOSGELDİNİZ \n");

    int sayi;

    printf("lutfen tek mi cift mi ogrenmek istediğiniz sayiyi giriniz \n ");
    scanf("%d",&sayi);

    if (sayi%2==0) {
        printf("%d sayisi cift bir sayidir",sayi);
    }
    else if (sayi%2==1) {
        printf("%d sayisi tek bir sayidir",sayi);
    }
    return 0;

