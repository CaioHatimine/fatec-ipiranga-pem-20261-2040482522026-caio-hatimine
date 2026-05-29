#include <stdio.h>

#define TAM 4

void exibir(int m[TAM][TAM]) {

    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {
            printf("%3d", m[i][j]);
        }

        printf("\n");
    }
}

int verificarSimetria(int m[TAM][TAM]) {

    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {

            if (m[i][j] != m[j][i]) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {

    int tab[TAM][TAM] = {
        {1, 2, 3, 4},
        {2, 5, 6, 7},
        {3, 6, 8, 5},
        {4, 7, 5, 8}
    };

    int somaPrincipal = 0;
    int somaSecundaria = 0;

    printf("Tabuleiro:\n");
    exibir(tab);

    if (verificarSimetria(tab))
        printf("\nA matriz eh simetrica.\n");
    else
        printf("\nA matriz nao eh simetrica.\n");

    for (int i = 0; i < TAM; i++) {

        somaPrincipal += tab[i][i];
        somaSecundaria += tab[i][TAM - 1 - i];
    }

    printf("Diagonal principal: %d\n", somaPrincipal);
    printf("Diagonal secundaria: %d\n", somaSecundaria);

    return 0;
}