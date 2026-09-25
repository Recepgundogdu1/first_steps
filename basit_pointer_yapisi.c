#include <stdio.h>
#include <stdlib.h>






int main() {
    int sayi1 = 10;
    int sayi2 = 12;


    int *p1;
    int *p2;

    p1 = &sayi1; //sayı1 in adresini p1 pointerine atadık ve p2 içinde aynısıını yaptık
    p2 = &sayi2;

    printf("%d",p1);
    printf("%d \n",&sayi1);


    *p1 = *p1+3;

    printf("%d   bunu yazdırrr\n",sayi1);
    printf("%d  bunu yazdır   \n",*p1);
    
}

