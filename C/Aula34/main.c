#include <stdio.h>
#include <stdlib.h>

/*
    Enumerações

    enum

*/

enum ingredientes {
    pao,
    queijo,
    presunto,
    mortadela,
    peito_de_peru,
    atum,
    alface,
    carne_de_haburguer

};

char matriz[][20] =
{
    "pao",
    "queijo",
    "presunto",
    "mortadela",
    "peito de peru",
    "atum",
    "alface",
    "carne de hamburguer"
};

int main()
{
    enum ingredientes referencia;

    for (referencia = pao;referencia <= carne_de_haburguer; referencia++)
    {
        printf("%s\n", matriz[referencia]);
    }

    return 0;
}
