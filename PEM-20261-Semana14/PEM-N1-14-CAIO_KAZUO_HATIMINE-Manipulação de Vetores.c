#include <stdio.h>

#define N 8

int main() {
    int v[N], inv[N];
    int maior, menor, iMaior, iMenor;
    int pares = 0, impares = 0;
    int busca, encontrado = -1;

    for (int i = 0; i < N; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);

        if (i == 0) {
            maior = menor = v[i];
            iMaior = iMenor = 0;
        } else {
            if (v[i] > maior) {
                maior = v[i];
                iMaior = i;
            }

            if (v[i] < menor) {
                menor = v[i];
                iMenor = i;
            }
        }

        if (v[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    for (int i = 0; i < N; i++) {
        inv[i] = v[N - 1 - i];
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", v[i]);

    printf("\n\nVetor invertido:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", inv[i]);

    printf("\n\nMaior: %d no indice %d\n", maior, iMaior);
    printf("Menor: %d no indice %d\n", menor, iMenor);
    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    printf("Digite valor para busca: ");
    scanf("%d", &busca);

    for (int i = 0; i < N; i++) {
        if (v[i] == busca) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1)
        printf("Encontrado no indice %d\n", encontrado);
    else
        printf("Valor nao encontrado.\n");

    return 0;
}