#include <stdio.h>
#include <stdlib.h>

// Este � o projeto da aula 2
// do curso de linguagem C

int main()
{
    int numero; // isto � uma variavel

    printf("Digite um numero: "); // impreme a frase na tela
    scanf("%d",&numero); // l� o n�mero que o usuario digitar
    getchar(); // limpa o buffer do teclado do PC

    printf("O numero eh igual a: %d\n\n",numero);

    // () = parametros
    // %d = refenrencia a variavel
    // & = endere�o
    return 0;
}
