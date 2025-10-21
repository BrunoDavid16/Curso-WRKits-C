#include <stdio.h>
#include <stdlib.h>

// -- CADEIA DE POINTEIROS -- //

int main()
{
   int var;
   int *point1;
   int **point2;

   var = 15;

   point1 = &var;

   point2 = &point1;

   printf("\n%d\n", **point2); // 15


    return 0;
}
