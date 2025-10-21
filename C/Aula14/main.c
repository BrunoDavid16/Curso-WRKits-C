#include <stdio.h>
#include <stdlib.h>
/*
int x;

    while(x<10)
    {
        //COMANDOS...
        x++;


    }

    do
    {
        //comandos

    }while(condição)


    do-while

    for(x=0;x<10;x++)
    {
        // inteação

    }
*/


int main()
{
    int opcao=1;

    do
    {
        printf("Digite a opcao: 1 - sim, 2 - nao ");
        scanf("%d", &opcao);
        getchar();

    }while(opcao < 1 || opcao > 2);

    return 0;
}
