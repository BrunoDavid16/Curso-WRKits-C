#include <stdio.h>
#include <stdlib.h>

// PONTEIROS
// & = ENDERE�O
// * = PONTEIRO

// TIPO *NOME;

int main()
{
    float variavel = 250.7; // vari�vel inteira com o valor 250
    float *ponteiro;      // oibteuri oara a vari�vel
    float exibe;          // vari�vel que vai exibir o valor 250

    ponteiro = &variavel; // ponteiro est� apontando para o endere�o da var�vel

    exibe = *ponteiro;   // a variavel exibe recebe o conte�do do endere�o para o qual o ponteiro aponta

    // 250

    printf("\n%f\n", exibe);
    return 0;
}
