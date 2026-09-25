#include <stdio.h>






int dizitoplama(int topla[],int size) {


 int toplam =0;

 for (int i=0;i<size;i++) {

  toplam=toplam+topla[i];

 }
return toplam;


}

int main() {



 int dizi2[2]={2,5};
 printf("bu dizi ikinciisnin sayilarlininn toplamı %d \n",dizitoplama(dizi2,2));
 int dizi[5]={2,3,4,54,5};
 printf("bu dizideki sayilerin toplamı %d",dizitoplama(dizi,5));
 return 0;
}
