#include <stdio.h>
#include <stdlib.h>

/* Regras de Escopo , Variaveis Locais */

void function();

// -- Variaveis Globais --

int x, y, z;

int main()
{
   int a, b, c, d;

   a = 100;
   b = 200;
   c = 300;
   d = 400;
   printf("Na funcao main, a = %d, b = %d, c = %d, d = %d\n\n",a,b,c,d);

   function();

   return 0;
}

void function()
{
    int a, b, c, d;

    a = 33;
    b = 44;
    c = 55;
    d = 66;

    if (a < b)
    {
        int z = 30;

        printf("z = %d\n\n", z);
    }

    printf("Na funcao function a = %d, b = %d, c = %d, d = %d\n\n", a,b,c,d);

}
