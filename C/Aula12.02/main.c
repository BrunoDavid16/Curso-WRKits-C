#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <stdlib.h>  // Biblioteca padr�o para fun��es utilit�rias (n�o usada diretamente aqui)

// Programa que calcula o quadrado de n�meros inteiros
// Solicita ao usu�rio n�meros inteiros e retorna o quadrado dos mesmos
// Condi��o para encerrar o programa: digitar o n�mero 0
// Utilizando la�o for e fun��es auxiliares

// Declara��o das fun��es auxiliares
void display();          // Fun��o que exibe mensagens para o usu�rio
int leitura();           // Fun��o que l� um n�mero inteiro do usu�rio
void square(int numero); // Fun��o que calcula e imprime o quadrado do n�mero

int main()
{
    int valor; // Vari�vel que armazenar� o n�mero digitado pelo usu�rio

    // La�o for com tr�s partes:
    // 1) display() -> executa antes do primeiro loop
    // 2) valor = leitura() -> l� um valor e verifica a condi��o do loop
    // 3) display() -> executa ao final de cada itera��o
    for(display(); valor = leitura(); display())
    {
        square(valor); // Calcula e imprime o quadrado do valor lido
    }

    return 0; // Finaliza o programa
}   // end main

// Fun��o display: exibe instru��es para o usu�rio
void display()
{
    printf("Digite zero para sair\n"); // Informa como sair do programa
    printf("ou informe um inteiro para calcular o seu quadrado: "); // Solicita um n�mero
} // end display

// Fun��o leitura: l� um n�mero inteiro digitado pelo usu�rio
int leitura()
{
    int t; // Vari�vel para armazenar o n�mero digitado
    scanf("%d", &t); // L� o n�mero do teclado
    return t;        // Retorna o n�mero lido
} // end leitura

// Fun��o square: calcula e imprime o quadrado do n�mero recebido
void square(int numero)
{
   printf("%d\n", numero * numero); // Imprime o quadrado do n�mero
} // end square
