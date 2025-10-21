#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 1;
    char b = 2;
    char c = 3;
    char d = 1;

    if(a > b && a < c ) // Se a maior que b e a menor que C (precisa das duas certas para imprimir na tela
    {

        printf("Condicao 1 verdadeira\n");
    }

    if(c == d || d == b) // Se c igual a d ou d igual a (se uma delas tiver certa ja imprime na tela)
    {
        printf("Condicao 2 verdadeira\n");
    }

    else { // se nao tiver nada certi, imprime na tela
        printf("Nenhuma condicao verdadeira\n");
    }
    return 0;
}
