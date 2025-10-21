#include <stdio.h>
#include <stdlib.h>

void exemplo1(int mat1[10]);
void exemplo2(int mat2[]);
void exemplo3 (int *point);

int main()
{
    int t[10], i;

    for(i=0; i<10; i++) t[i] = i;

    exemplo3(t);

    printf("\n");
    return 0;
}

void exemplo1(int mat1[10])
{
    int i;

    for (i=0; i<10; i++) printf("%d ",mat1[i]);

}

void exemplo2 (int mat2[])
{
    int i;

    for(i = 0; i < 10; i++) printf("%d ", mat2[i]);
}

void exemplo3(int *point)
{
    int i;

    for(i=0; i<10; i++) printf("%d ", point[i]);
}
