//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

int main() {
    int leiturasSensor[8] = {23, 27, 24, 30, 31, 28, 26, 25};
    int *pLeitura = leiturasSensor; 
    
    int somatorio = 0;
    int valorMaximo = *pLeitura;
    int valorMinimo = *pLeitura;
    
    printf("=== RASTREAMENTO DE METRICAS (VIA PONTEIRO ++) ===\n\n");
    
    for(int i = 0; i < 8; i++) {
        int leituraAtual = *pLeitura;
        
        printf("Leitura #%d -> Armazenada em: %p -> Valor Lido: %d°C\n", i + 1, (void*)pLeitura, leituraAtual);
        
        somatorio += leituraAtual;
        if(leituraAtual > valorMaximo) valorMaximo = leituraAtual;
        if(leituraAtual < valorMinimo) valorMinimo = leituraAtual;
        
        pLeitura++; 
    }
    
    float mediaFinal = (float)somatorio / 8;
    
    printf("\n=== RELATORIO CONSOLIDADO ===\n");
    printf("Soma das Leituras:  %d\n", somatorio);
    printf("Media Termica:      %.1f°C\n", mediaFinal);
    printf("Pico Registrado:    %d°C\n", valorMaximo);
    printf("Minima Registrada:  %d°C\n", valorMinimo);
    
    return 0;
}