#include <stdio.h>
#include <stdlib.h>

int main()
{


    struct minha_estrututa
    {
        int inteiro;
        double flutuante;


    }exemplo1, exemplo2;

    exemplo2.flutuante = 55.7;

    exemplo1 = exemplo2;
    printf("%lf \n", exemplo1.flutuante);

    return 0;
}
