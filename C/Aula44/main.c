#include <stdio.h>
#include <stdlib.h>

unsigned long fatorial1(int num);



int main()
{
    unsigned long fat;

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    getchar();

    fat = fatorial1(num);

    printf("O fatorial de %d eh %ld\n", num, fat);

    system("PAUSE");
    return 0;
}

unsigned long fatorial1(int num)
{
    unsigned long result;

    if((num == 1) || (num == 0)) return(1);

    result = num * fatorial1(num - 1);

    return (result);
}
