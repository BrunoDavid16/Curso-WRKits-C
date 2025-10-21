#include <stdio.h>
#include <stdlib.h>

// PONTEIROS
// & = ENDEREÇO
// * = PONTEIRO

// TIPO *NOME;

int main()
{
    float variavel = 250.7; // variável inteira com o valor 250
    float *ponteiro;      // oibteuri oara a variável
    float exibe;          // variável que vai exibir o valor 250

    ponteiro = &variavel; // ponteiro está apontando para o endereço da varável

    exibe = *ponteiro;   // a variavel exibe recebe o conteúdo do endereço para o qual o ponteiro aponta

    // 250

    printf("\n%f\n", exibe);
    return 0;
}
