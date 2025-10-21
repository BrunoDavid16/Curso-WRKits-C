#include <stdio.h>
#include <stdlib.h>

/*
    Passando structs para funçoôes

    tipo nome_funcao (parametros/argumentos);

*/
 struct estrutura
 {
    int a, b;

    char c;

 };

 void imprimir(struct estrutura parametro)
 {
    printf("%c\n", parametro.c);



 }

int main()
{
    struct estrutura argumento;

    argumento.c = 'f';

    imprimir(argumento);

    return 0;
}
