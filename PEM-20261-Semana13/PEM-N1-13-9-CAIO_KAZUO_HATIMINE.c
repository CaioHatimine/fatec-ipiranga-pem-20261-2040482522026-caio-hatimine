//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

void inverterLista(int *vetor, int tamanho) {
    int *ponteiroEsquerdo = vetor;               
    int *ponteiroDireito = vetor + (tamanho - 1); 
    
    while(ponteiroEsquerdo < ponteiroDireito) {
        int backup = *ponteiroEsquerdo;
        *ponteiroEsquerdo = *ponteiroDireito;
        *ponteiroDireito = backup;
        ponteiroEsquerdo++;
        ponteiroDireito--;
    }
}

int main() {
    int sequenciaNumeros[7] = {5, 10, 15, 20, 25, 30, 35};
    
    printf("Sequencia Original: ");
    for(int i = 0; i < 7; i++) printf("%d ", sequenciaNumeros[i]);
    printf("\n");
    
    inverterLista(sequenciaNumeros, 7);
    
    printf("Sequencia Invertida: ");
    for(int i = 0; i < 7; i++) printf("%d ", sequenciaNumeros[i]);
    printf("\n");
    
    return 0;
}