#include <stdio.h>

void addArray(int *a, int *b, int *c, int size){
    int *pa = a;
    int *pb = b+ size -1;
    int *pc = c;

    for(int i = 0; i < size; i++){
        *pc = *pa + *pb;
        pa++;
        pb--;
        pc++;
    }
}


int main() {
    int n;
    int a[20], b[20], c[20];
    scanf("%d", &n);

    int *p;
    for (p =a; p < a+n; p++){
        scanf("%d", &n);
    }
    for (p =b; p< b+n; p++){
        scanf("%d", &n);
    }
    addArray(a, b, c, n);

    for(p=c; p< c +n; p++){
        printf("%d", *p);
    }
    
    
    
    return 0;
}