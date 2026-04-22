//CAIO KAZUO HATIMINE
//19/04/26
//OBJETIVO: manipular dados em memória utilizando ponteiros e vetores na linguagem C    

#include <stdio.h>

// protótipo da função 
void processarCarga(float *ptr_vetor, int n);

int main() {
    // REQ01: vetor de pesos inicializado na main
    float pesos[10] = {120.5, 80.0, 150.2, 95.0, 110.0, 135.5, 70.0, 145.0, 105.0, 125.0};
    int tamanho = 10;

    // REQ04: exibir estado antes do processamento
    printf("--- Estado Inicial dos Pesos ---\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Pacote %d: %.2f kg\n", i + 1, pesos[i]);
    }

    // chamada da função passando o endereço do vetor 
    processarCarga(pesos, tamanho);

    // REQ04: exibir estado após o processamento
    printf("\n--- Estado Final (Apos Calibracao) ---\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Pacote %d: %.2f kg\n", i + 1, pesos[i]);
    }

    return 0;
}

// REQ02: implementação da função de processamento
void processarCarga(float *ptr_vetor, int n) {
    float soma = 0.0, media = 0.0;

    // REQ03a: calcular a média aritmética usando ponteiros
    for (int i = 0; i < n; i++) {
        soma += *(ptr_vetor + i); 
    }
    media = soma / n;
    printf("\nMedia do lote: %.2f kg\n", media);

    // REQ03b e REQ03c: localizar excedentes (> 10%) e aplicar correção (-5%)
    for (int i = 0; i < n; i++) {
        // acessando o valor via aritmética de ponteiros
        float pesoAtual = *(ptr_vetor + i);

        if (pesoAtual > (media * 1.10)) {
            printf("Ajustando pacote index %d: Excede a media em +10%%.\n", i);
            
            // aplica correção de -5% diretamente no endereço de memória
            *(ptr_vetor + i) = pesoAtual * 0.95;
        }
    }
}