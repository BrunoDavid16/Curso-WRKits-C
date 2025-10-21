#include <stdio.h>
#include <stdlib.h>

/*
    switch (variàvel)
    {
        case constante1
             comandos;
             break;
        case constante2;
             comandos2
             break;
             .
             .
             .
        default;
        comandos;

    }
*/

// Conversor de base numérica : decimal > hexadecimal e vice-versa
int main()
{
    int opcao;
    int valor;

    printf("Converter: \n");
    printf("1: decimal para hexadecimal\n");
    printf("2: hexadecimal para decimal\n");
    printf("\nInforme sua opcao");
    scanf("%d", &opcao);
    getchar();

    switch(opcao)
    {
       case 1:
           printf("\nInforme o valor em decimal: ");
           scanf("%d", &valor);
           getchar();
           printf("%d em hexadecimal eh: %x", valor, valor);
           break;
       case 2:
           printf("\nInforme o valor em hexadecimal: ");
           scanf("%x", &valor);
           getchar();
           printf("%x em decimal eh: %d", valor,valor);
           break;
       default:
           printf("\nOpcao invalida\n");
    }
    return 0;
}
