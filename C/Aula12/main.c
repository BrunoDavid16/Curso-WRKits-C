#include <stdio.h>
#include <stdlib.h>

// Aplica�oes n�o convencionais do la�o for

// utilizar mais de uma variavel no mesmo la�o for

// Imprimir os n�meros pares de 0 a 100


int main()
{
   int i, j;

   for(i=0,j=0; i+j <= 100; i++,j++)
{
       printf("%d\n", i+j);
   }


    return 0;
}
