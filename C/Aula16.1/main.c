#include <stdio.h>
#include <stdlib.h>

#define tam 6

int main()
{
    //Dois vetores e imprimir o produto escalar de ambos
    // vetor1 = 2, 3
    // vetor2 = 4, 8
    // produto = 2x4 + 3x8 = 32

    int vetor1[tam], vetor2[tam], i,produto=0;

    printf("Entrar com o valor do vetor 1\n");
    for(i=0;i<tam;i++)
    {
        printf("Elemento %d ", i);
        scanf("%d", &vetor1[i]);
        getchar();
    }

     printf("Entrar com o valor do vetor 1\n");
    for(i=0;i<tam;i++)
    {
        printf("Elemento %d ", i);
        scanf("%d", &vetor2[i]);
        getchar();
    }

    for(i=0;i<tam;i++) produto += vetor1[i] * vetor2[i];

    printf("O produto escalar eh igual a %d\n", produto);

    return 0;
}
