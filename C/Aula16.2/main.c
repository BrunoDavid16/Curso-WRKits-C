#include <stdio.h>
#include <stdlib.h>

// Criar um vetor e organizar os dados da seguinte forma
// Os dados do vetor devem ser exibidos de forma crescente

#define tam 5
#define falso 0
#define verdadeiro 1

int main()
{
    int vetor[tam], i,change = falso, finall = tam, store;

    printf("Entre com um vetor de %d elementos\n", tam);
    for(i=0; i<tam;i++)
    {
        printf("Elemento %d ", i);
        scanf("%d", &vetor[i]);
        getchar();
    }

    do
    {
        change = falso;
        for(i=0; i < finall - 1; i++)
        {
            if(vetor[i]>vetor[i+1]) // vetor[0] = 5, vetor[1] = 2
            {
                store = vetor[i];        //store = 5
                vetor[i] = vetor[i+1];  //vetor[0] = 2
                vetor[i+1] = store;     //vetor[1] = 5
                change = verdadeiro;

            }
        } // end for

    } while(change);

    for(i=0;i<tam;i++) printf("%d\n", vetor[i]);
    return 0;
}
