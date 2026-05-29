#include <stdio.h>

int main() {

    int v[6] = {10, 20, 30, 40, 50, 60};
    int *p = v;
    int soma = 0;

    printf("Valores e enderecos:\n");

    for (int i = 0; i < 6; i++) {

        printf("Valor: %d | Endereco: %p\n", *(p + i), (void *)(p + i));

        soma += *(p + i);
    }

    printf("\nSoma = %d\n", soma);

    printf("\nDobro dos valores:\n");

    for (int i = 0; i < 6; i++) {

        *(p + i) = *(p + i) * 2;

        printf("%d ", *(p + i));
    }

    printf("\n\nDiferenca entre enderecos consecutivos:\n");

    for (int i = 0; i < 5; i++) {

        printf("%ld bytes\n",
               (char *)(p + i + 1) - (char *)(p + i));
    }

    return 0;
}