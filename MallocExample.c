#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
 char *cp;
  cp=(char*)malloc(40);
  //Null pointer (NULL), dinamik bellek tahsisi yapılamadığı zaman belleğin bir adres gösteremediği özel bir değerdir
  if(!cp)//ayrılan yerin null pointer olup olmadığını) kontrol etmek için kullanılıyor.
  {
    printf("Bellek alani  tahsis edilemedi!!");
    exit(1);//güvenli çıkış 
  }
  strcpy(cp,"Bugun hava guzel");
  printf("%s",cp);
  free(cp);
    return 0;
}