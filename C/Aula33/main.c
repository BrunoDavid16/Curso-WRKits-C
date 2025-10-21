#include <stdio.h>
#include <stdlib.h>

// UNIONS

union estrutura01
{
        int inteiro;

        char caractere;

        float decimal;


};

struct estrutura02
{

    int inteiro02;

    char caractere02;

    float decimal02;


};

int main()
{
    printf("Uniao: %d\n", sizeof(union estrutura01));

    printf("Estrutura: %d\n", sizeof(struct estrutura02));

    return 0;
}
