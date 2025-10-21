#include <stdio.h>
#include <stdlib.h>

// Ponteiros (indexação)

int main()
{
    int mat[20] = {10, 15, 5, 30, 25, 65, 35, 45, 50, 55, 50, 100, 89, 39, 85, 75, 77, 79, 90, 8};

    int *point, i;

    point = mat;

    for(i=0;i<20;i++) printf("%d\n", *(point+i));



    return 0;
}
