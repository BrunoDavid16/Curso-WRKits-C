#include <stdio.h>
#include <stdlib.h>

// --- Prototipo das funçoes auxiliares ---
void funcao1();
void funcao2();

// --- Variaveis Globais ---
int counter; // variavel global para contagem


// - Main
int main()
{
    counter = 200;

    funcao1();
    return 0;
}

// --- Desenvolvimento das funções auxliares ---

void funcao1()
{
    funcao2();

    printf("\n\nO valor de counter eh %d\n\n", counter);
}

void funcao2()
{
    int counter;

    for(counter = 1; counter < 20; counter++)
    {
        printf("-");
    }
}
