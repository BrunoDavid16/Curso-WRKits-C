#include <stdio.h>
#include <stdlib.h>

// continue

// Imprimir os nùmeros pares de 0 a 100

  /*  int x;

    for(x=0; x<=100; x++)
    {
        if(x % 2) continue;

        printf("%d\n", x);
    } // end for
    */

   // Maquina de codificção

void codificar(); // protótipo da função

int main()
{
    printf("Entrar com as letras para codificar\n");
    printf("Digite $ para sair.\n");
    codificar();

    return 0;
}

void codificar()
{
        char ok = 0, ch;

        while(!ok)
        {
            ch = getchar();
            if(ch == '$')
            {
                ok = 1;
                continue;
            }
            printf("%c", ch + 2);
        }
} // end condifica
