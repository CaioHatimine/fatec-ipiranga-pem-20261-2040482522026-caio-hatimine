#include <stdio.h>

#include <string.h>

int main() {

    char frase[100];

    printf("digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int tamanho = strlen(frase);
    int i, contador = 1;

    for (i=0; i<tamanho; i++) {
        if (frase[i] == ' ') {
            if (frase[i+1] != ' ') {
                contador++;
            }
        }
    }

    printf("a quantidade de palavras nessa frase e: %d", contador);

    return 0;
}