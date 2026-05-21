//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

void analisarLote(int *vetor, int totalItens, int *saidaSoma, float *saidaMedia, int *saidaMaior, int *saidaMenor) {
    *saidaSoma = 0;
    *saidaMaior = *vetor; 
    *saidaMenor = *vetor; 
    
    for(int i = 0; i < totalItens; i++) {
        int itemAtual = *(vetor + i);
        *saidaSoma += itemAtual;
        
        if(itemAtual > *saidaMaior) *saidaMaior = itemAtual;
        if(itemAtual < *saidaMenor) *saidaMenor = itemAtual;
    }
    
    *saidaMedia = (float)(*saidaSoma) / totalItens;
}

int main() {
    int amostras[6] = {18, 55, 9, 34, 22, 41};
    
    int somatorioGeral, valorMaximo, valorMinimo;
    float mediaCalculada;
    
    analisarLote(amostras, 6, &somatorioGeral, &mediaCalculada, &valorMaximo, &valorMinimo);
    
    printf("=== ANALISE MULTI-RETORNO EXECUTADA ===\n\n");
    printf("Soma Total:       %d\n", somatorioGeral);
    printf("Media do Lote:    %.2f\n", mediaCalculada);
    printf("Maior Registro:   %d\n", valorMaximo);
    printf("Menor Registro:   %d\n", valorMinimo);
    
    return 0;
}