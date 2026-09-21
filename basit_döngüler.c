#include <stdio.h>

int main() {

    //9 dan 100 e kadar olan sayıların 9 un katı şeklinde yaz

    for (int i = 9; i %9==0 && i<100;  i=i+9) {


        printf("%d\n",i);

        int sayi =1;
        while (sayi<10) {
            printf("%d\n",sayi);
            sayi++;

        }

    }



    int sayi2=9;
    do {
        printf("%d\n",sayi2);
        sayi2++;

    }
    while (sayi2<10);
    return 0;
}
