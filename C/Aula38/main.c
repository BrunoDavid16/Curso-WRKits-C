#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.1415926535

/*
    Funçôes qye retirban vakires bão inteiros

    float || double nome (parametros)
*/

float teste (float numero);
float area_circulo (float raio);

int main()
{
    float raio_usuario, resultado;

    printf("Informe o valor do raio:");
    scanf("%f",&raio_usuario);

    resultado = area_circulo(raio_usuario);

    printf("A area eh: %f\n", resultado);
    return 0;
}


float teste (float numero)
{
    float retornar;

    retornar = numero;

    return retornar;
}

float area_circulo(float raio)
{
    return pi*pow(raio', 2);
}
