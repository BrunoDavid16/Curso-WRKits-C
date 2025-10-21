#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <stdlib.h>  // Biblioteca padrão para funções utilitárias (não usada diretamente aqui)

// Programa que calcula o quadrado de números inteiros
// Solicita ao usuário números inteiros e retorna o quadrado dos mesmos
// Condição para encerrar o programa: digitar o número 0
// Utilizando laço for e funções auxiliares

// Declaração das funções auxiliares
void display();          // Função que exibe mensagens para o usuário
int leitura();           // Função que lê um número inteiro do usuário
void square(int numero); // Função que calcula e imprime o quadrado do número

int main()
{
    int valor; // Variável que armazenará o número digitado pelo usuário

    // Laço for com três partes:
    // 1) display() -> executa antes do primeiro loop
    // 2) valor = leitura() -> lê um valor e verifica a condição do loop
    // 3) display() -> executa ao final de cada iteração
    for(display(); valor = leitura(); display())
    {
        square(valor); // Calcula e imprime o quadrado do valor lido
    }

    return 0; // Finaliza o programa
}   // end main

// Função display: exibe instruções para o usuário
void display()
{
    printf("Digite zero para sair\n"); // Informa como sair do programa
    printf("ou informe um inteiro para calcular o seu quadrado: "); // Solicita um número
} // end display

// Função leitura: lê um número inteiro digitado pelo usuário
int leitura()
{
    int t; // Variável para armazenar o número digitado
    scanf("%d", &t); // Lê o número do teclado
    return t;        // Retorna o número lido
} // end leitura

// Função square: calcula e imprime o quadrado do número recebido
void square(int numero)
{
   printf("%d\n", numero * numero); // Imprime o quadrado do número
} // end square
