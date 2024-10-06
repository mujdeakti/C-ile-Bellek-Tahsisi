#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>
#include <string.h>

//malloc memory allocation
/*Bellekte  alan ayırır ve ayrılan alanın baslangıc degerini gösteren bir void pointer doner
eğer istediğimiz alanı ayıramayacaksa NULL pointer doner
--Diyelim ki ayırdığımız yere int degerler gelmeli . Böyle olunca void pointer ı typecasting ile  int pointr a donuşturmeliyiz
ya da değişken türü char ise void pointer ı char pointer a çevirmeliyiz.
 malloc(dizi_boyutu)
 dizi boyutu başta void 1000 olarak ayarlarsak ve değşkenimiz int türünde ise void i int e donustureceğimizden  hafıza bize 250 lik bir alan ayırır. Çünkü void 1 byte yer kaplar int 4 byte yer kaplar .O yüzden alan ayrıırken miktar vermemek en dogurusudur.
 dizi_boyut*sizeof(int) şeklinde göndermeliyiz.-- Böylece bize int 4 byte old için 4x 1000 lik bir alan ayırır. Her değişken türü için bunu kullanabilriz
 */
int main()
{
  char *ptr;
  ptr=(char*)malloc(sizeof(char));//hafızada alan ayrıldı
  *ptr='a';

  printf("Ayrilan bellek adres baslangici:%p\n",ptr);
  printf("Ayrilan bellek degisken degeri:%c\n",*ptr);

  free(ptr);//tahsis edilen bellek boşaltıldı

  int *ptr2;
  ptr2=(int*)malloc(sizeof(int));
  *ptr2=123;
  printf("Ayrilan bellek adres baslangici:%p\n",ptr2);
  printf("Ayrilan bellek degisken degeri:%c\n",*ptr2);
  return 0;
}