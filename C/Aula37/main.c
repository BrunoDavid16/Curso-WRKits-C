#include <stdio.h>
#include <stdlib.h>
/*
    Fun��es que retornam valores inteiros void

    tipo nome parametros()

    nome (parametros)

*/

// --- Prototipos das fun��es Auxiliares ---

int soma(int num1, int num2);
int subt(int num1, int num2);
int mult (int num1, int num2);
int divi (int num1, int num2);

// --- Fun��o Principal ---
int main()
{
    printf("%d\n", soma(2, 5));

    printf("%d\n", subt(5, 3));

    printf("%d\n", mult(10, 2));

    printf("%d\n", divi(20, 5));


    return 0;
}


// --- Desenvolvimento das Fun��es Auxiliares
int soma(int num1, int num2)
{
    return (num1 + num2);

} // end soma

int subt(int num1, int num2)
{
    return (num1 - num2);

} // subt

int mult(int num1, int num2)
{
    return(num1 * num2);

}

int divi(int num1, int num2)
{
    return(num1 / num2);

}
