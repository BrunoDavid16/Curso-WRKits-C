#include <stdio.h>
#include <stdlib.h>

/*
    if (condi��o 01) condi��o precisa ser verdadeira para executar os comandos
    {

        comandos;
    }

    else if (condi��o 02)
    {

        comandos;
    }
        else if (condi��o 03)
    {

        comandos;
    }

    else
    {
        comandos;
    }
*/

int main()
{
    int a;
    int b;


    printf("Digite um valor para a: ");
    scanf("%d", &a);
    getchar();
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    getchar();

    if(a < b) {
        printf("a menor que b\n\n");
    }

    else if (b < a)
    {
        printf("b menor que a\n\n");
    }

    else
    {
        printf("a eh igual a b\n\n");
    }

    return 0;
}
