#include <stdio.h>

int main() {

    int  i, j, n = 5;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (j = n - i; j <= n; j++) {
            printf("%d ", j);
        }

        for (j = n - 1; j >= n - i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
