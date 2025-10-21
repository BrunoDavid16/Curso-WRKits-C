#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen ("teste.txt","w");

    fprintf(arquivo, "\nHello World\n");

    fclose(arquivo);

    return 0;
}
