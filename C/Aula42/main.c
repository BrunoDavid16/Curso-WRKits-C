#include <stdio.h>
#include <stdlib.h>

void change (int *x, int *y);


int main()
{
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    getchar();
    printf("Digte outro numero: ");
    scanf("%d", &num2);
    getchar();

    printf("Os valores iniciais num1 = %d e num2 = %d\n\n", num1, num2);

    change(&num1, &num2);

    printf("Os valores modificados de num1 = %d e num2 = %d\n\n", num1, num2);

    return 0;
}



void change(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;



}
