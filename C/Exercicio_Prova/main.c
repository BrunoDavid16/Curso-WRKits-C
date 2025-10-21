#include <stdio.h>
/*
int main() {
    int x = 10;
    int *p;
    p = &x;
    *p = *p + 5;
    printf("%d\n", x);
    return 0;
}
ponteiro = 15
*/
/*
#include <stdio.h>

int main() {
    int x = 7;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;

    *p1 = *p1 + 3;
    *p2 = *p2 * 2;

    printf("%d\n", x);
    return 0;
}
*/

/*
int main() {
    int v[3] = {1, 2, 3};
    int *p = v;

    *(p + 1) = *(p) + *(p + 2);

    printf("%d %d %d\n", v[0], v[1], v[2]);
    return 0;
}
*/



int main() {
    int v[3] = {5, 10, 15};
    int *p = v;

    *(p) = *(p) + 2;
    *(p + 2) = *(p + 1) - 3;

    printf("%d %d %d\n", v[0], v[1], v[2]);
    return 0;
}
