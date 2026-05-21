//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

void executarTroca(int *x, int *y) {
    int provisorio = *x;
    *x = *y;
    *y = provisorio;
}

void ordenarPorSelecao(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho - 1; i++) {
        int *ponteiroMenor = vetor + i;
        
        for(int j = i + 1; j < tamanho; j++) {
            if(*(vetor + j) < *ponteiroMenor) {
                ponteiroMenor = vetor + j; 
            }
        }
        
        if(ponteiroMenor != (vetor + i)) {
            executarTroca(vetor + i, ponteiroMenor);
            
            // Log de acompanhamento solicitado pelo exercicio
            printf("  [Passo de Troca]: ");
            for(int k = 0; k < tamanho; k++) {
                printf("%d ", *(vetor + k));
            }
            printf("\n");
        }
    }
}

int main() {
    int numerosDesordenados[8] = {54, 11, 3, 76, 9, 21, 45, 14};
    
    printf("Vetor Inicial: ");
    for(int i = 0; i < 8; i++) printf("%d ", numerosDesordenados[i]);
    printf("\n\n--- Iniciando o Selection Sort ---\n");
    
    ordenarPorSelecao(numerosDesordenados, 8);
    
    printf("\nResultado Final Ordenado: ");
    for(int i = 0; i < 8; i++) printf("%d ", numerosDesordenados[i]);
    printf("\n");
    
    return 0;
}