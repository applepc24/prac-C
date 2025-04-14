#include <stdio.h>

int main() {
    int x, y, z;
    int *px = &x;
    int *py = &y;
    int *pz = &z;

    printf("정수 3개 입력: ");
    scanf("%d %d %d", px, py, pz);

    int *tmp;
    int tempVal;

    tmp = px;
    tempVal = *pz;

    *pz = *py;
    *py = *px;
    *tmp = tempVal;

    printf("이동 후 값: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}