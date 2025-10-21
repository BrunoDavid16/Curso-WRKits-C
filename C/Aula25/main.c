#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaração das funções
int check (char *s);
void take_component();

// Base de dados de componentes eletrônicos
// Array bidimensional com pares: [componente, descrição]
char databank[][40] = {
    "BC547", "TBJ NPN 625mW",                    // Transistor bipolar NPN de baixa potência
    "BC557", "TBJ PNP 625mW",                    // Transistor bipolar PNP de baixa potência
    "TIP41", "TBJ NPN 65W",                      // Transistor de potência NPN
    "TIP42", "TBJ PNP 65W",                      // Transistor de potência PNP
    "TIP122", "TBJ NPN Darlington 100V 5A",      // Transistor Darlington NPN
    "TIP127", "TBJ PNP Darlington 100V 5A",      // Transistor Darlington PNP
    "2N2222", "TBJ NPN High Frequency 500mW",    // Transistor de alta frequência
    "2N7000", "Mosfet N channel",                // MOSFET canal N
    "IRF3205", "Mosfet N channel 55V 9BA",       // MOSFET de potência canal N
};

// Variáveis globais
char input[80];      // String para armazenar entrada do usuário
char component[80];  // String para armazenar componente individual extraído
char *point;         // Ponteiro para navegar pela string input

int main()
{
    int indice;   // Índice retornado pela função check
    int option;   // Opção do usuário para continuar ou sair

    do
    {
        // Solicita entrada do usuário
        printf("Informe o componente que deseja pesquisar: ");
        gets(input);  // PROBLEMA DE SEGURANÇA: gets() é inseguro, usar fgets()
        point = input; // Inicializa ponteiro para início da string

        printf("Caracteristicas do componente pesquisado: ");

        // Extrai primeiro componente da string
        take_component();

        // Loop para processar todos os componentes na linha
        do
        {
            indice = check(component);  // Verifica se componente existe no banco

            // Exibe resultado da busca
            if(indice != -1)
                printf("%s", databank[indice+1]);  // Mostra descrição (índice+1)
            else
                printf("Sem registros no banco de dados \n");

            take_component();  // Extrai próximo componente

        }while(*component);  // Continua enquanto há componentes para processar

        printf("\n");

        // Pergunta se usuário quer continuar
        printf("Pesquisar mais? s - sin | n = nao \n");
        scanf("%c", &option);
        getchar();  // Limpa buffer do teclado

    }while(option == 's' || option == 'S');  // Repete se usuário escolher continuar

    return 0;
}

// Função que verifica se um componente existe no banco de dados
// Parâmetro: s - string com nome do componente
// Retorna: índice do componente no array ou -1 se não encontrado
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
        return (i);      // Retorna índice se encontrado
    else
        return(-1);      // ERRO CORRIGIDO: "retun" -> "return"
}

// Função que extrai um componente individual da string input
// Separa componentes por espaços e atualiza ponteiro global
void take_component()
{
    char *q;
    q = component;  // Ponteiro para construir string do componente

    // Copia caracteres até encontrar espaço ou fim da string
    while(*point && *point != ' ')
    {
        *q = *point;    // Copia caractere
        point++;        // Avança ponteiro de origem
        q++;            // Avança ponteiro de destino
    }

    // Pula espaço se encontrado
    if (*point == ' ')
        point++;

    *q = '\0';  // Termina string com caractere nulo
}

/*
RESUMO DOS ERROS ENCONTRADOS E CORRIGIDOS:
1. Faltava #include <string.h> para usar strcmp()
2. "retun(-1)" estava escrito errado, corrigido para "return(-1)"

PROBLEMAS DE SEGURANÇA NÃO CORRIGIDOS (mas identificados):
- gets() é inseguro e pode causar buffer overflow
- Recomenda-se usar fgets(input, sizeof(input), stdin)

FUNCIONAMENTO DO PROGRAMA:
- Sistema de consulta de componentes eletrônicos
- Permite pesquisar múltiplos componentes em uma linha
- Separa componentes por espaços
- Exibe características de cada componente encontrado
- Permite múltiplas consultas até o usuário escolher sair
*/
