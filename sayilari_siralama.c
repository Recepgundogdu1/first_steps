#include <iso646.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ilk_sayi, ikinci_sayi, üçüncü_sayi;

    printf("Lutfen karsilastirmak istediginiz sayilari sirayla giriniz: ");
    scanf("%d", &ilk_sayi);
    scanf("%d", &ikinci_sayi);
    scanf("%d", &üçüncü_sayi);

    int en_büyük, en_küçük, ikinci;

    // --- EN BÜYÜĞÜ BULMA ---
    if (ilk_sayi >= ikinci_sayi and ilk_sayi >= üçüncü_sayi) {
        en_büyük = ilk_sayi;
    } else if (ikinci_sayi >= ilk_sayi and ikinci_sayi >= üçüncü_sayi) {
        en_büyük = ikinci_sayi;
    } else {
        en_büyük = üçüncü_sayi;
    }

    // --- EN KÜÇÜĞÜ BULMA ---
    if (ilk_sayi <= ikinci_sayi and ilk_sayi <= üçüncü_sayi) {
        en_küçük = ilk_sayi;
    } else if (ikinci_sayi <= ilk_sayi and ikinci_sayi <= üçüncü_sayi) {
        en_küçük = ikinci_sayi;
    } else {
        en_küçük = üçüncü_sayi;
    }

    // --- ORTADAKİ (İKİNCİ) SAYIYI BULMA ---
    // Toplamdan en büyük ve en küçüğü çıkararak ortadakini kolayca bulabiliriz:
    ikinci = (ilk_sayi + ikinci_sayi + üçüncü_sayi) - (en_büyük + en_küçük);

    printf("En büyük sayi: %d, Ikinci (orta) sayi: %d, En küçük sayi: %d\n", en_büyük, ikinci, en_küçük);

    return 0;
}
