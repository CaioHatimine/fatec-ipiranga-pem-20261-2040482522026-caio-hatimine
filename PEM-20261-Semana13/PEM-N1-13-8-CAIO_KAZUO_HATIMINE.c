//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

int main() {
    double historicoPrecos[10] = {10.5, 11.2, 12.0, 11.8, 13.4, 14.1, 15.0, 14.8, 16.2, 17.5};
    
    double *ponteiroInicioJanela = &historicoPrecos[2]; 
    double *ponteiroFimJanela = &historicoPrecos[7]; 
    
    long distanciaElementos = ponteiroFimJanela - ponteiroInicioJanela;
    printf("Distancia calculada entre os dois marcadores: %ld elementos.\n\n", distanciaElementos);
     
    printf("Exibindo os valores contidos nesse intervalo:\n");
    double *varredura = ponteiroInicioJanela;
    while(varredura <= ponteiroFimJanela) {
        printf("[%.2f] ", *varredura);
        varredura++;
    }
    printf("\n");
    
    return 0;
}