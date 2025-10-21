#include <stdio.h>
#include <stdlib.h>

#define tam 5
/*
    int valor[tamanho]

    int vetor{5}

    float vetor{10}


    char vetor[4]


*/

int main()
{
    int vetor[tam];
    unsigned i, numero;

    printf("Entrar com o numero inicial do vetor.");
    scanf("%d", &numero);
    getchar();

    //gerar o vetor
    for(i=0;i<tam;i++) vetor[1] = numero++;

    // imprimir o vetor;
    for(i=0;i<tam;i++) printf("Elemento %d = %d\n", 1, vetor[i]);

    // vetor [0] = 3
    return 0;
}
