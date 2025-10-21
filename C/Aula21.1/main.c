#include <stdio.h>
#include <stdlib.h>

// Aritm�tica com Ponteiros - adi��o ou subtra��o
int main()
{
    float vetor[5];       // cria um vetor para o ponteiro apontar
    float *flPoint = vetor; // ponteiro aponta para o in�cio do vetor

    printf("\nEndere�o inicial: %p\n", (void*)flPoint);

    flPoint++; // avan�a uma posi��o (4 bytes, pois float tem 4 bytes normalmente)

    printf("Ap�s flPoint++ : %p\n", (void*)flPoint);

    flPoint--; // volta uma posi��o (4 bytes)

    printf("Ap�s flPoint-- : %p\n", (void*)flPoint);

    return 0;
}
