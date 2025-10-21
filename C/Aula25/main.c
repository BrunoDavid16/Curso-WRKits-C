#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declara��o das fun��es
int check (char *s);
void take_component();

// Base de dados de componentes eletr�nicos
// Array bidimensional com pares: [componente, descri��o]
char databank[][40] = {
    "BC547", "TBJ NPN 625mW",                    // Transistor bipolar NPN de baixa pot�ncia
    "BC557", "TBJ PNP 625mW",                    // Transistor bipolar PNP de baixa pot�ncia
    "TIP41", "TBJ NPN 65W",                      // Transistor de pot�ncia NPN
    "TIP42", "TBJ PNP 65W",                      // Transistor de pot�ncia PNP
    "TIP122", "TBJ NPN Darlington 100V 5A",      // Transistor Darlington NPN
    "TIP127", "TBJ PNP Darlington 100V 5A",      // Transistor Darlington PNP
    "2N2222", "TBJ NPN High Frequency 500mW",    // Transistor de alta frequ�ncia
    "2N7000", "Mosfet N channel",                // MOSFET canal N
    "IRF3205", "Mosfet N channel 55V 9BA",       // MOSFET de pot�ncia canal N
};

// Vari�veis globais
char input[80];      // String para armazenar entrada do usu�rio
char component[80];  // String para armazenar componente individual extra�do
char *point;         // Ponteiro para navegar pela string input

int main()
{
    int indice;   // �ndice retornado pela fun��o check
    int option;   // Op��o do usu�rio para continuar ou sair

    do
    {
        // Solicita entrada do usu�rio
        printf("Informe o componente que deseja pesquisar: ");
        gets(input);  // PROBLEMA DE SEGURAN�A: gets() � inseguro, usar fgets()
        point = input; // Inicializa ponteiro para in�cio da string

        printf("Caracteristicas do componente pesquisado: ");

        // Extrai primeiro componente da string
        take_component();

        // Loop para processar todos os componentes na linha
        do
        {
            indice = check(component);  // Verifica se componente existe no banco

            // Exibe resultado da busca
            if(indice != -1)
                printf("%s", databank[indice+1]);  // Mostra descri��o (�ndice+1)
            else
                printf("Sem registros no banco de dados \n");

            take_component();  // Extrai pr�ximo componente

        }while(*component);  // Continua enquanto h� componentes para processar

        printf("\n");

        // Pergunta se usu�rio quer continuar
        printf("Pesquisar mais? s - sin | n = nao \n");
        scanf("%c", &option);
        getchar();  // Limpa buffer do teclado

    }while(option == 's' || option == 'S');  // Repete se usu�rio escolher continuar

    return 0;
}

// Fun��o que verifica se um componente existe no banco de dados
// Par�metro: s - string com nome do componente
// Retorna: �ndice do componente no array ou -1 se n�o encontrado
int check(char *s)
{
    int i;

    // Percorre o array databank procurando pelo componente
    for(i = 0; *databank[i]; i++)
    {
        // Compara string do componente com entrada no banco
        if(!strcmp(databank[i],s)) break;  // Sai do loop se encontrar
    }

    // Verifica se componente foi encontrado
    if(*databank[i])
        return (i);      // Retorna �ndice se encontrado
    else
        return(-1);      // ERRO CORRIGIDO: "retun" -> "return"
}

// Fun��o que extrai um componente individual da string input
// Separa componentes por espa�os e atualiza ponteiro global
void take_component()
{
    char *q;
    q = component;  // Ponteiro para construir string do componente

    // Copia caracteres at� encontrar espa�o ou fim da string
    while(*point && *point != ' ')
    {
        *q = *point;    // Copia caractere
        point++;        // Avan�a ponteiro de origem
        q++;            // Avan�a ponteiro de destino
    }

    // Pula espa�o se encontrado
    if (*point == ' ')
        point++;

    *q = '\0';  // Termina string com caractere nulo
}

/*
RESUMO DOS ERROS ENCONTRADOS E CORRIGIDOS:
1. Faltava #include <string.h> para usar strcmp()
2. "retun(-1)" estava escrito errado, corrigido para "return(-1)"

PROBLEMAS DE SEGURAN�A N�O CORRIGIDOS (mas identificados):
- gets() � inseguro e pode causar buffer overflow
- Recomenda-se usar fgets(input, sizeof(input), stdin)

FUNCIONAMENTO DO PROGRAMA:
- Sistema de consulta de componentes eletr�nicos
- Permite pesquisar m�ltiplos componentes em uma linha
- Separa componentes por espa�os
- Exibe caracter�sticas de cada componente encontrado
- Permite m�ltiplas consultas at� o usu�rio escolher sair
*/
