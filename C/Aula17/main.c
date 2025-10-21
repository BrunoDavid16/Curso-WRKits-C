#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Strings
// cadeia de caracteres

int main()
{
    int comp1, comp2;

    char nome[51], sobrenome[51];
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    comp1 = strlen(nome);
    getchar();

    printf("Digite seu swobrenome: ");
    scanf("%s", &sobrenome);
    comp2 = strlen(sobrenome);
    getchar();

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("Ola, %s!\n", nome);

    printf("Seu nome tem %d caracteres e seu sobrenome tem %d caracteres\n", comp1, comp2);

    printf("\n");
    printf(strlwr(nome));
    printf("\n");

    strcpy(nome,"outro nome");

    printf(nome);

    printf("\n");

    return 0;
}
