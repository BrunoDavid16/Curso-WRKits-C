#include <stdio.h>
#include <stdlib.h>

// Pointeiros e Matrizes

int main()
{
    char matriz[20] = "Teste de string";

    char *point;

    point = matriz;

    point = point + 9;

    printf("\n%c\n", *point);

    return 0;
}
