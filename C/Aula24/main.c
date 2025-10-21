#include <stdio.h>
#include <stdlib.h>

// Pointeiros e Strings

/*
Sintaxe e da Semântica

*/

int main()
{
    char str[50];

    char *point;

    int i; // iterações

    printf("Entre com uma string: ");
    gets(str);

    // Encontrar o primeiro espaço ou fim da string

    for (i=0;str[i] && str[i] !=' '; i++); // encontrqamos o primeiro espaço na string

    point = &str[i];

    printf("\n");
    printf(point);
    printf("\n");

    return 0;
}
