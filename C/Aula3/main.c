#include <stdio.h>
#include <stdlib.h>
// variavel global � aquela que declaramos fora da fun��oo
// variavel local � aquela que declaramos dentro da fun��o

// se a variavel n�o for inicializada ela ser� 0
int main()
{
    unsigned numero01 = 15; // inicializando uma variavel do tipo inteiro com um "="

    float numero02 = 22.5; // inicializando uma variavel do tipo real com um "="


    char caractere = 'TESTE';

    printf("%d\n",numero01);
    printf("%.1f\n", numero02); // .1 == uma casa de precis�o
    printf("%c\n", caractere);

    return 0;
}
