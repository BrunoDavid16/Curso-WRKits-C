#include <stdio.h>
#include <stdlib.h>


// Aritim�ticas com Ponteiros adi��o || subtra��o

int main()
{
   int teste;
   int *point1, *point2;

   teste = 500;

   point1 = &teste;
   point2 = point1;

   printf("\n No local %p", point2); // %p = hexadecimal | Endere�o de teste

   printf(" encontra-se o valor %d \n", *point2); // o valor de teste

    return 0;
}
