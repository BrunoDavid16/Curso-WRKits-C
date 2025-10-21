#include <stdio.h>
#include <stdlib.h>

// Este é o projeto da aula 2
// do curso de linguagem C

int main()
{
    int numero; // isto é uma variavel

    printf("Digite um numero: "); // impreme a frase na tela
    scanf("%d",&numero); // lê o número que o usuario digitar
    getchar(); // limpa o buffer do teclado do PC

    printf("O numero eh igual a: %d\n\n",numero);

    // () = parametros
    // %d = refenrencia a variavel
    // & = endereço
    return 0;
}
