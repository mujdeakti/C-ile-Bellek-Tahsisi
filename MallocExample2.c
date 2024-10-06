#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
 char *ptr1="Bugun ";
 char *ptr2,*ptr3;
 char cdizi[50];

 ptr2="Hava";

 ptr3=(char*)malloc(50);
 strcpy(ptr3,"Cok");
 strcpy(cdizi,"Guzel");

 printf("%s\t%s\t%s\t%s",ptr1,ptr2,ptr3,cdizi);
 
 free(ptr3);
 
    return 0;
}