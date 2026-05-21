//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

int main() {

    int multiplicadores[5] = {10, 25, 40, 55, 70};
    int *ponteiroDados = multiplicadores; 
    
    printf("Valores originais da tabela: ");
    for(int i = 0; i < 5; i++) {
        printf("[%d] ", multiplicadores[i]);
    }
    printf("\n\nAplicando efeito de dobro (via aritmetica de ponteiros)...\n\n");
    
    for(int i = 0; i < 5; i++) {
        *(ponteiroDados + i) *= 2; 
    }
    
    printf("Valores atualizados de forma indireta: ");
    for(int i = 0; i < 5; i++) {
        printf("[%d] ", multiplicadores[i]);
    }
    printf("\n");
    
    return 0;
}