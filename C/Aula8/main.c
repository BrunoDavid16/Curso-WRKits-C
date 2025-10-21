#include <stdio.h>
#include <stdlib.h>

// Projeto

int main()
{
        int opcao; // variável para armazenar a opção escolhida pelo usuário
        int valor; // variável para armazenar o número que será convertido

        // Exibe o menu de opções
        printf("Conversor Bases Numericas \n");
        printf("1: decimal para hexadecimal \n");
        printf("2: hexadecimal para decimal \n");
        printf("\n\nInforme a opcao: ");


        // O correto é scanf("%d", &opcao);
        scanf("%d", &opcao);
        getchar(); // consome o caractere de nova linha deixado no buffer

        // Se a opção escolhida for 1: converter decimal para hexadecimal
        if (opcao == 1)
        {
            printf("\nInformar o valor em decimal: ");
            scanf("%d", &valor); // lê o número decimal
            getchar();
            // imprime o número decimal em formato hexadecimal
            printf("%d em hexadecimal eh: %x", valor, valor);
        }
        // Se a opção escolhida for 2: converter hexadecimal para decimal
        else if  (opcao == 2)
        {
            printf("\nInforme o valor em hexadecimal: ");
            scanf("%x", &valor); // lê o número no formato hexadecimal
            getchar();
            // imprime o número hexadecimal em formato decimal
            printf("%x em decimal eh: %d", valor, valor);
        }

        // Caso a opção digitada não seja nem 1 nem 2
        else printf("\nSua opcao eh invalida.");

    return 0; // finaliza o programa
}

