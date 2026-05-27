#include <stdio.h>

int main() {
    int N;
    int A[20], B[20];

    int *p, *q;

    scanf("%d", &N);

    for (p = A; p < A + N; p++) {
        scanf("%d", p);
    }

    for (p = B; p < B + N; p++) {
        scanf("%d", p);
    }

    p = A;

    q = B + N - 1;

    while (p < A + N) {

        printf(" %d", *p + *q);

        p++; 
        q--; 
    }

    return 0;
}
