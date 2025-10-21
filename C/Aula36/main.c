#include <stdio.h>
#include <stdlib.h>

// Funçôies

/*
    tipo_da_funcao nome_funcao (parametros_da_funcao)

    void nome_funcao();

    int nome_funcao();

    nome_funcao();

*/

// -- Prototipo das funções -- //
void imprimir();
void imprimir2();
void soma(int num1, int num2);


int main()
{
    imprimir();
    imprimir2();
    soma(5, 15);

    system("PAUSE");
    return 0;


}

// -- Funções Auxiliares -- //

void imprimir()
{
    printf("Mensagem01\n");
    printf("Mensagem02\n");
    printf("Mensagem03\n");
    printf("Mensagem04\n");
}

void imprimir2()
{
    printf("Mensagem05\n");
    printf("Mensagem06\n");
    printf("Mensagem07\n");
    printf("Mensagem08\n");

}
void soma(int num1, int num2)
{
    int resultado = num1 + num2;
    printf("Soma de num1 com num2: %d\n", resultado);
}



