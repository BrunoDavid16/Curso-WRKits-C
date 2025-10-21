/*
    Sistema de banco de dados simples

    Seleciona vendedores pore região
*/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h> // para usar getche() no Windows (se estiver no Linux, troque por getchar())

int main()
{
    char regiao, vendedor;

    printf("Regioes: Leste, Oeste, Norte e Sul\n");
    printf("Informe a primeira letra da regiao: ");
    regiao = getche(); // lê um caractere
    regiao = toupper(regiao); // converte para maiúscula
    printf("\n");

    switch(regiao)
    {
        case 'L':
            printf("Vendedores: Ricardo, Jose e Mariana \n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getche());
            printf("\n");

            switch(vendedor)
            {
                case 'R':
                    printf("Vendas: R$%d\n", 5000);
                    break;
                case 'J':
                    printf("Vendas: R$%d\n", 15000);
                    break;
                case 'M':
                    printf("Vendas: R$%d\n", 18000);
                    break;
                default:
                    printf("Vendedor invalido!\n");
            }
            break;

        case 'O':
            printf("Vendedores: Rafael, Joana e Pedro \n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getche());
            printf("\n");

            switch(vendedor)
            {
                case 'R':
                    printf("Vendas: R$%d\n", 3500);
                    break;
                case 'J':
                    printf("Vendas: R$%d\n", 9000);
                    break;
                case 'P':
                    printf("Vendas: R$%d\n", 17000);
                    break;
                default:
                    printf("Vendedor invalido!\n");
            }
            break;

        case 'N':
            printf("Vendedores: Fabiana, Gabriela e Roberto \n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getche());
            printf("\n");

            switch(vendedor)
            {
                case 'F':
                    printf("Vendas: R$%d\n", 3000);
                    break;
                case 'G':
                    printf("Vendas: R$%d\n", 22300);
                    break;
                case 'R':
                    printf("Vendas: R$%d\n", 1000);
                    break;
                default:
                    printf("Vendedor invalido!\n");
            }
            break;

        case 'S':
            printf("Vendedores: Jeremias, Micael e Paulo \n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getche());
            printf("\n");

            switch(vendedor)
            {
                case 'J':
                    printf("Vendas: R$%d\n", 25000);
                    break;
                case 'M':
                    printf("Vendas: R$%d\n", 35000);
                    break;
                case 'P':
                    printf("Vendas: R$%d\n", 8000);
                    break;
                default:
                    printf("Vendedor invalido!\n");
            }
            break;

        default:
            printf("Regiao invalida!\n");
    }

    return 0;
}
