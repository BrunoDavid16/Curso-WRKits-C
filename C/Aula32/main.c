#include <stdio.h>
#include <stdlib.h>

// -- Estrutura de Dados --
struct clock
{
    int horas;
    int minutos;
    int segundos;
};

// -- Protótipos --
void delay();
void update(struct clock *t);
void display(struct clock *t);

// -- Função Principal --
int main()
{
    struct clock time;

    time.horas = 0;
    time.minutos = 0;
    time.segundos = 0;

    for( ; ; )
    {
        update(&time);
        display(&time);
    }
    return 0;
}

// -- Funções Auxiliares --
void delay()
{
    long t;
    for(t = 1; t < 100000000; t++); a
}

void update(struct clock *t)
{
    t->segundos++;

    if(t->segundos == 60)
    {
        t->segundos = 0;
        t->minutos++;
    }
    if(t->minutos == 60)
    {
        t->minutos = 0;
        t->horas++;
    }
    if(t->horas == 24)
        t->horas = 0;

    delay();
}

void display(struct clock *t)
{
    printf("%02d:%02d:%02d\n", t->horas, t->minutos, t->segundos);
}
