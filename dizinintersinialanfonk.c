#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void metnitersyaz(char metin[]) {

  int size = strlen(metin);
  char ters[size+1];
  for (int i=0;i<5;i++) {
    ters[i]=metin[size-1-i];

  }
    ters[size] = '\0';

  printf("metnin tersi : %s",ters);

}
int main() {

  char metin[]="hello";
  metnitersyaz(metin);


}
