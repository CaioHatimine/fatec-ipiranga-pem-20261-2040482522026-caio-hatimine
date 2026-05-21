//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

int main() {
    int gradeDados[4][4] = {
        {15, 22, 8,  19},
        {4,  33, 52, 11},
        {80, 21, 14, 43},
        {31, 9,  65, 2}
    };
    

    int *ponteiroLinear = &gradeDados[0][0];
    int maiorValor = *ponteiroLinear;
    int posicaoLinearSalva = 0;
    

    for(int i = 0; i < 16; i++) {
        if(*(ponteiroLinear + i) > maiorValor) {
            maiorValor = *(ponteiroLinear + i);
            posicaoLinearSalva = i; 
        }
    }
    

    int linhaMapeada = posicaoLinearSalva / 4;
    int colunaMapeada = posicaoLinearSalva % 4;
    
    printf("=== ANALISE LINEAR DE MATRIZES ===\n\n");
    printf("Maior registro detectado: %d\n", maiorValor);
    printf("Coordenadas reais -> Linha: %d | Coluna: %d\n", linhaMapeada, colunaMapeada);
    
    return 0;
}