#include <stdio.h>
#include <stdlib.h>
// variavel global é aquela que declaramos fora da funçãoo
// variavel local é aquela que declaramos dentro da função

// se a variavel não for inicializada ela será 0
int main()
{
    unsigned numero01 = 15; // inicializando uma variavel do tipo inteiro com um "="

    float numero02 = 22.5; // inicializando uma variavel do tipo real com um "="


    char caractere = 'TESTE';

    printf("%d\n",numero01);
    printf("%.1f\n", numero02); // .1 == uma casa de precisão
    printf("%c\n", caractere);

    return 0;
}
