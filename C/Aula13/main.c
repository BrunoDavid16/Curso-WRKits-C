#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Jogo de soma simples usando goto (não recomendado, mas funciona)

// Função principal
int main()
{
    int i = 0, j, resposta;  // j será redefinido a cada loop
    int erros = 0, acertos = 0;
    char opcao;

inicio: // Label para reiniciar o jogo

    // Corrigir o for: 'j + 1' não faz sentido, deve inicializar j
    for(j = 1; j < 10; j++)  // j começa em 1
    {
        printf("Qual a resposta %d + %d? ", i, j);
        scanf("%d", &resposta);
        getchar(); // Consome o '\n' deixado pelo Enter

        if (resposta != (i + j))
        {
            erros++;
            printf("Resposta errada!\n");
        }
        else
        {
            acertos++;
            printf("Resposta correta!\n");
        }
    } // end for

    printf("Acertos = %d\n", acertos);
    printf("Erros = %d\n", erros);

meio:  // Label para perguntar se o usuário quer continuar
    printf("Continuar respondendo? s = sim, n = nao: ");
    opcao = toupper(getchar());
    getchar(); // Limpa o buffer do Enter
    printf("\n");

    switch(opcao) // ⚠ Corrigir os ';' para ':'
    {
        case 'S':  // <-- era ';', deve ser ':'
            i++;
            goto inicio;
            break; // Opcional
        case 'N':  // <-- era ';', deve ser ':'
            goto fim;
            break; // Opcional
        default:   // <-- era ';', deve ser ':'
            printf("Opcao invalida\n");
            goto meio;
    } // end switch

fim: // Label final do programa
    return 0;
}
