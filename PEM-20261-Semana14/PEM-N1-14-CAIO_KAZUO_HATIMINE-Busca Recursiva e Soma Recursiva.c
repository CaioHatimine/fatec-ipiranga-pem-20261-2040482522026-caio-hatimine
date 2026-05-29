#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int chamadasBusca = 0;
int chamadasSoma = 0;

int profundidadeBusca = 0;
int profundidadeSoma = 0;

int maxBusca = 0;
int maxSoma = 0;

int buscaRec(int *v, int n, int chave) {

    chamadasBusca++;
    profundidadeBusca++;

    if (profundidadeBusca > maxBusca)
        maxBusca = profundidadeBusca;

    // Caso base
    if (n == 0) {

        profundidadeBusca--;

        return -1;
    }

    if (v[0] == chave) {

        profundidadeBusca--;

        return 0;
    }

    // Passo recursivo
    int resultado = buscaRec(v + 1, n - 1, chave);

    profundidadeBusca--;

    if (resultado == -1)
        return -1;

    return resultado + 1;
}

int somaRec(int *v, int ini, int fim) {

    chamadasSoma++;
    profundidadeSoma++;

    if (profundidadeSoma > maxSoma)
        maxSoma = profundidadeSoma;

    // Caso base
    if (ini == fim) {

        profundidadeSoma--;

        return v[ini];
    }

    // Passo recursivo
    int meio = (ini + fim) / 2;

    int esquerda = somaRec(v, ini, meio);
    int direita = somaRec(v, meio + 1, fim);

    profundidadeSoma--;

    return esquerda + direita;
}

int main() {

    int v[12];
    int chave;

    srand(time(NULL));

    printf("Vetor:\n");

    for (int i = 0; i < 12; i++) {

        v[i] = rand() % 100;

        printf("%d ", v[i]);
    }

    printf("\n");

    int soma = somaRec(v, 0, 11);

    printf("\nSoma total = %d\n", soma);

    printf("Chamadas somaRec = %d\n", chamadasSoma);
    printf("Profundidade maxima somaRec = %d\n", maxSoma);

    printf("\nDigite valor para busca: ");
    scanf("%d", &chave);

    int indice = buscaRec(v, 12, chave);

    if (indice != -1)
        printf("Valor encontrado no indice %d\n", indice);
    else
        printf("Valor nao encontrado\n");

    printf("Chamadas buscaRec = %d\n", chamadasBusca);
    printf("Profundidade maxima buscaRec = %d\n", maxBusca);

    return 0;
}