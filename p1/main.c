#include <stdio.h>

int main() {
    char x[10];
    int count, max = 0;
    char ch;

    char *p, *q;

    for (p = x; p < x + 10; p++) {
        scanf(" %c", p);
    }

    for (p = x; p < x + 10; p++) {

        count = 0;

        for (q = x; q < x + 10; q++) {
            if (*p == *q) {
                count++;
            }
        }

        if (count > max) {
            max = count;
            ch = *p;
        }
    }

    printf("%c %d", ch, max);

    return 0;
}
