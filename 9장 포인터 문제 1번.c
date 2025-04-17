#include <stdio.h>

int main() {
    int x, y, z;
    int *xp = &x;
    int *yp = &y;
    int *zp = &z;

    int *tmp;
    int tmpval;

    tmp = xp;
    tmpval = *xp;

    *xp = *yp;
    *yp = *zp;
    *tmp = tmpval;

    printf("이동 후 값: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}