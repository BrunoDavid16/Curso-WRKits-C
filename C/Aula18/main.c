#include <stdio.h>
#include <stdlib.h>

#define DIML 3   // quantidade de nomes
#define DIMC 30  // tamanho máximo de cada nome

int main()
{
    int i;
    char nomes[DIML][DIMC]; // matriz de strings

    for (i = 0; i < DIML; i++)
    {
        printf("Entre com o nome %d: ", i+1);
        scanf("%s", nomes[i]); // lê string até o espaço
    }

    for (i = 0; i < DIML; i++)
    {
        printf("O nome %d eh: %s\n", i+1, nomes[i]);
    }

    return 0;
}
