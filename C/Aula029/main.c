#include <stdio.h>
#include <stdlib.h>

/*
Estrutura de Dados

 struct
*/

struct componente
{
    char tipo[20];
    char referencia[4];
    unsigned char num_ref;
    int valor;
    char unidade[10];


}comp;

int main()
{
    printf("Tipo do componente__________________: ");
    fflush(stdin);
    fgets(comp.tipo,20,stdin);

    printf("Referencia do componente___________:  ");
    fflush(stdin);
    fgets(comp.referencia,4,stdin);

    printf("Numero da referencia_______________: ");
    scanf("%c",&comp.num_ref);
    getchar();

    printf("O valor do componente______________: ");
    scanf("%d", &comp.valor);
    getchar();

    printf("Unidade___________________________: ");
    fflush(stdin);
    fgets(comp.unidade, 10, stdin);


    printf("\n\nCOMPONENTE CRIADO:\n\n");
    printf("%s", comp.tipo);
    printf("%s", comp.referencia);
    printf("%c", comp.num_ref);
    printf(" Valor: %d", comp.valor);
    printf(" %s \n\n", comp.unidade);


    return 0;
}
