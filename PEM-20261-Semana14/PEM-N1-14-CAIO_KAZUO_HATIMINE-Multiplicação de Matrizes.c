#include <stdio.h>

#define TAM 3

int main() {
    int A[TAM][TAM];
    int B[TAM][TAM];
    int C[TAM][TAM];

    printf("Digite os valores da matriz A:\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplicacao matricial
    // i -> linha de A
    // j -> coluna de B
    // k -> percorre linha/coluna para multiplicacao

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {

            C[i][j] = 0;

            for (int k = 0; k < TAM; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz A:\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C = A x B:\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}