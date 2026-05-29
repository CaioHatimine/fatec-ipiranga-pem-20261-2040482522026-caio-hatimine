#include <stdio.h>

int main() {
    char op;

    do {
        for (int i = 1; i <= 10; i++) {

            printf("\nTabuada do %d\n", i);

            int j = 1;

            while (j <= 10) {
                printf("%2d x %2d = %3d\n", i, j, i * j);
                j++;
            }
        }

        printf("\nDeseja continuar? (S/N): ");
        scanf(" %c", &op);

    } while (op == 'S' || op == 's');

    return 0;
}