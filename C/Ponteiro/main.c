#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);
void update(int *p);

int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    display(var, ptr);

    update(&var);

    display(var,ptr);

    printf("\n\nEnd.");
    while(1);
    return 0;


}
 void display (int var, int *ptr)
 {
    printf("\n\n");
    printf("conteudo do var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereco apontado por ptr = %p\n", ptr);
    printf("endereco do ptr                        = %p\n", &ptr);
 }

 void update(int *p)
 {
    *p = *p+1;
 }

    // Ponteiros:
    // *ptr : o apontado por, conteúdo do endereço da variável que ptr aponta
    // ptr : o endereço da variàvel
    // &ptr : O enderço do ponteiro
