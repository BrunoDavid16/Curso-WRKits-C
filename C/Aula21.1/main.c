#include <stdio.h>
#include <stdlib.h>

// Aritmética com Ponteiros - adição ou subtração
int main()
{
    float vetor[5];       // cria um vetor para o ponteiro apontar
    float *flPoint = vetor; // ponteiro aponta para o início do vetor

    printf("\nEndereço inicial: %p\n", (void*)flPoint);

    flPoint++; // avança uma posição (4 bytes, pois float tem 4 bytes normalmente)

    printf("Após flPoint++ : %p\n", (void*)flPoint);

    flPoint--; // volta uma posição (4 bytes)

    printf("Após flPoint-- : %p\n", (void*)flPoint);

    return 0;
}
