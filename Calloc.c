#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>
#include <string.h>


/*calloc(dizi_boyutu,sizeof(değişken_türü)) şeklinde iki değer alır
Aslında malloc ile aynı işi yapar. Malloc , calloca gore daha hızlı çalışır
calloc sonucunda ne tutuyorsa 0 elemanı ile başlatılmış oluyor fakat mallocta boyle bir şey yok bellek kactan baslıyorsa ordan devam ettirir
*/
int main()
{
  int *ptr,c;

  ptr = (int *) calloc(5, sizeof(int));

  for (c=0; c<5; c++) {
       *(ptr+c) = (c+1) * 10;
       printf("%p adresindeki değer: %d\n", (ptr+c), *(ptr+c));
  }
  free(ptr);//Ayırdığımız alanı mutlaka serbest birakmaliyiz!!

  return 0;
}