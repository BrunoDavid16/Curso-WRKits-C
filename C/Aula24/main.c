#include <stdio.h>
#include <stdlib.h>

// Pointeiros e Strings

/*
Sintaxe e da Sem�ntica

*/

int main()
{
    char str[50];

    char *point;

    int i; // itera��es

    printf("Entre com uma string: ");
    gets(str);

    // Encontrar o primeiro espa�o ou fim da string

    for (i=0;str[i] && str[i] !=' '; i++); // encontrqamos o primeiro espa�o na string

    point = &str[i];

    printf("\n");
    printf(point);
    printf("\n");

    return 0;
}
