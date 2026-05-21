//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

int main() {
    printf("=== ANALISE DE ARQUITETURA: TAMANHO DE PONTEIROS ===\n\n");
    
    printf("Tamanho de um ponteiro para Inteiro: %zu bytes\n", sizeof(int*));
    printf("Tamanho de um ponteiro para Float:   %zu bytes\n", sizeof(float*));
    printf("Tamanho de um ponteiro para Double:  %zu bytes\n", sizeof(double*));
    printf("Tamanho de um ponteiro para Char:    %zu bytes\n", sizeof(char*));

    return 0;
}