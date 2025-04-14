int main() {
    int ar[50] = {0}, N;
    int *p;

    scanf("%d", &N);
    for (p = ar; p < ar+N; p++) {
        scanf("%d", p);
    }

    int count = 0;
    for (p =ar; p < ar +N; p++){
        if(*p == 0) break;
        count++;
    }

    printf("%d\n", count);
    return 0;
}