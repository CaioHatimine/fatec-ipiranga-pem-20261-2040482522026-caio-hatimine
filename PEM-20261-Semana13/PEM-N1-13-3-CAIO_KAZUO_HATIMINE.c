//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

void inverterValores(int *primeiro, int *segundo) {
    int espacoTemporario = *primeiro;
    *primeiro = *segundo;
    *segundo = espacoTemporario;
}

int main() {
    int pontuacaoJogadorA = 150;
    int pontuacaoJogadorB = 320;
    
    printf("=== PLACAR INICIAL ===\n");
    printf("Jogador A: %d pontos | Jogador B: %d pontos\n\n", pontuacaoJogadorA, pontuacaoJogadorB);
    
    printf("Corrigindo placar (Invertendo referencias)...\n");
    inverterValores(&pontuacaoJogadorA, &pontuacaoJogadorB);
    
    printf("\n=== PLACAR CORRIGIDO ===\n");
    printf("Jogador A: %d pontos | Jogador B: %d pontos\n", pontuacaoJogadorA, pontuacaoJogadorB);
    
    return 0;
}