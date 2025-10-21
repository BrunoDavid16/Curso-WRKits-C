#include <stdio.h>
#include <stdlib.h>

// Projeto

int main()
{
        int opcao; // vari�vel para armazenar a op��o escolhida pelo usu�rio
        int valor; // vari�vel para armazenar o n�mero que ser� convertido

        // Exibe o menu de op��es
        printf("Conversor Bases Numericas \n");
        printf("1: decimal para hexadecimal \n");
        printf("2: hexadecimal para decimal \n");
        printf("\n\nInforme a opcao: ");


        // O correto � scanf("%d", &opcao);
        scanf("%d", &opcao);
        getchar(); // consome o caractere de nova linha deixado no buffer

        // Se a op��o escolhida for 1: converter decimal para hexadecimal
        if (opcao == 1)
        {
            printf("\nInformar o valor em decimal: ");
            scanf("%d", &valor); // l� o n�mero decimal
            getchar();
            // imprime o n�mero decimal em formato hexadecimal
            printf("%d em hexadecimal eh: %x", valor, valor);
        }
        // Se a op��o escolhida for 2: converter hexadecimal para decimal
        else if  (opcao == 2)
        {
            printf("\nInforme o valor em hexadecimal: ");
            scanf("%x", &valor); // l� o n�mero no formato hexadecimal
            getchar();
            // imprime o n�mero hexadecimal em formato decimal
            printf("%x em decimal eh: %d", valor, valor);
        }

        // Caso a op��o digitada n�o seja nem 1 nem 2
        else printf("\nSua opcao eh invalida.");

    return 0; // finaliza o programa
}

