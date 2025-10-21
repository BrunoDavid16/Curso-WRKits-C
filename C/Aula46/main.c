#include <stdio.h>
#include <stdlib.h>


void leArquivo(int *vet);

int main()
{
    int vet[10];

    leArquivo(vet);


    printf("Arquivo foi lido e criado com sucesso\n\n");

    return 0;
}

void leArquivo(int *vet)
{
    char i = 0;

    FILE *arquivo;

    arquivo = fopen("C:\\Users\\luuca\\Desktop\\C\\Aula45\\teste.txt","r");

    for(i=0; i<=9; i++) fscanf(arquivo, "%d\n", &vet[i]);

    arquivo = fopen("teste02.txt", "w");

    for(i=0; i<9; i++) fprintf(arquivo, "%d\n", vet[i]+2);

    fclose(arquivo);



}
