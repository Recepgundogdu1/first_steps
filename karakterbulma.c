#include <stdio.h>
#include <stdlib.h>
#include <string.h>









//girilen metinden kaç tane harf olduğunu bulma


int main() {


    char metin[100];
    char ch;
    int adet=0;

    printf("lutfen girmek istediginiz metni giriniz  \n");
    scanf("%s",metin);
    printf("lutfen karakter giriniz");
    scanf(" %c",&ch);
    for (int i =0;i<strlen(metin);i++) {
        if (metin[i]==ch) {
            adet++;
        }
    }
    printf("metninizde bu harf %d kadar var ",adet);

    return 0;


}
