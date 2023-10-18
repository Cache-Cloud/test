#include <stdio.h>

void py() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int c[] = {7, 8, 9};
    int d = 0;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        d += a[i] * a[i] + b[i] * b[i] + c[i] * c[i];
    }
    printf("%d\n", d);
}

int main() {
    py();
    return 0;
}