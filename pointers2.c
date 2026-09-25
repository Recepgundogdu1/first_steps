#include <stdio.h>
#include <stdlib.h>

// Türkçe karakterler kaldırıldı
void diziyi_degistir(int *p1) {
    *p1 = 10;
}

int main() {
    int dizi[] = {0, 1, 2, 3, 4};
    int *p;

    p = dizi; // p şu an dizi[0]'ı gösteriyor (Değeri: 0)
    printf("p'nin ilk gosterdigi deger = %d \n", *p);

    *p = 100; // dizi[0] artık 100 oldu.
    printf("Dizinin 0. elemani (dizi[0]): %d \n", dizi[0]);

    // Pointer adresini 1 adım sağa kaydır (dizi[1]'e geç)
    p++;
    printf("p++ sonrasi p'nin gosterdigi yeni deger: %d \n", *p); // 1 yazdırır

    // p şu an dizi[1]'i gösterdiği için, fonksiyon gidip dizi[1]'i 10 yapacak!
    diziyi_degistir(p);

    printf("Fonksiyondan sonra dizi[0]: %d \n", dizi[0]); // Hala 100
    printf("Fonksiyondan sonra dizi[1]: %d \n", dizi[1]); // Artık 10!

    return 0;
}
