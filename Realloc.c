#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
 int *ptr, c;
 ptr=(int*)malloc(5*sizeof(int));//5 int alacak kadar alan ayırtılır
for(c=0;c<5;c++)//belleğin ilk doldururlması
{
    *(ptr+c)=c+1;
    printf("%p adresindeki deger:%d\n",(ptr+c),*(ptr+c));
}
/*
   ilk bellek görünümü
   | ip + 0 | ip + 1 | ip + 2 | ip + 3 | ip + 4 |
   |   1    |   2    |   3    |   4    |   5    |

*/
ptr=(int*)realloc(ptr,10*sizeof(int));//5 lik alan 10 int alana genişletilir
printf("Genisletilmis bellek degerleri:\n");
for( ;c<10;c++)
{
    *(ptr+c)=ptr+1;
    printf("%p adresindeki deger:%d\n",(ptr+c),*(ptr+c));
}
/*yer genişletildikte sonraki bellek görünümü bu şekilde olur
    | ip + 0 | ip + 1 | ip + 2 | ip + 3 | ip + 4 | ip + 5 | ip + 6 | ip + 7 | ip + 8 | ip + 9 |
    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |  10    |
    */
free(ptr);
    return 0;
}