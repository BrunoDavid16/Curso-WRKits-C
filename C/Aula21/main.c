#include <stdio.h>
#include <stdlib.h>


// Aritiméticas com Ponteiros adição || subtração

int main()
{
   int teste;
   int *point1, *point2;

   teste = 500;

   point1 = &teste;
   point2 = point1;

   printf("\n No local %p", point2); // %p = hexadecimal | Endereço de teste

   printf(" encontra-se o valor %d \n", *point2); // o valor de teste

    return 0;
}
