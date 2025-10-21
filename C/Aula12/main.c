#include <stdio.h>
#include <stdlib.h>

// Aplicaçoes não convencionais do laço for

// utilizar mais de uma variavel no mesmo laço for

// Imprimir os nùmeros pares de 0 a 100


int main()
{
   int i, j;

   for(i=0,j=0; i+j <= 100; i++,j++)
{
       printf("%d\n", i+j);
   }


    return 0;
}
