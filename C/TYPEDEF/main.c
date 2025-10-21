#include <stdio.h>

// Definindo o enum com typedef
typedef enum {
    ITEM1,
    ITEM2,
    ITEM3,
    ITEM4
} Exemplo;   // <-- agora "Exemplo" é o nome do tipo

int main() {
    Exemplo var;   // não precisa escrever "enum" na frente
    var = ITEM3;

    printf("Valor de var: %d\n", var);
    return 0;
}
