#include <stdio.h>

void troca(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void minMax(int *v, int n, int *min, int *max) {

    *min = v[0];
    *max = v[0];

    for (int i = 1; i < n; i++) {

        if (v[i] < *min)
            *min = v[i];

        if (v[i] > *max)
            *max = v[i];
    }
}

void normalizaVetor(float *v, int n) {

    float maior = v[0];

    for (int i = 1; i < n; i++) {

        if (v[i] > maior)
            maior = v[i];
    }

    for (int i = 0; i < n; i++) {

        v[i] = v[i] / maior;
    }
}

int main() {

    int x = 10, y = 20;

    printf("Antes da troca: %d %d\n", x, y);

    troca(&x, &y);

    printf("Depois da troca: %d %d\n", x, y);

    int vet[] = {4, 9, 1, 15, 7};
    int menor, maior;

    minMax(vet, 5, &menor, &maior);

    printf("\nMenor = %d\n", menor);
    printf("Maior = %d\n", maior);

    float valores[] = {2.0, 4.0, 8.0};

    normalizaVetor(valores, 3);

    printf("\nVetor normalizado:\n");

    for (int i = 0; i < 3; i++) {

        printf("%.2f ", valores[i]);
    }

    return 0;
}