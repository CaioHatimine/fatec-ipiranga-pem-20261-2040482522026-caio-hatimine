//CAIO KAZUO HATIMINE
//RA: 026
//24/04/26
//objetivo: refatoração com ponteiros
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_PASTAS 50
#define LIMITE_ALERTA 300.0

typedef struct {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    int subpastas_indices[10];
    int qtd_sub;
} Pasta;

Pasta drive[MAX_PASTAS];

// funcao que percorre a hierarquia de pastas usando ponteiros
// recebe a pasta atual o nivel atual e o limite de profundidade
float processarHierarquiaPtr(Pasta *p, int nivel_atual, int limite_profundidade) {

    // verifica se a pasta eh nula ou se ultrapassou o limite de profundidade
    // se for verdadeiro retorna zero
    if (p == NULL || nivel_atual > limite_profundidade) return 0;

    // inicia o tamanho total com o tamanho proprio da pasta
    p->tamanho_total = p->tamanho_proprio;

    // percorre todas as subpastas da pasta atual
    for (int i = 0; i < p->qtd_sub; i++) {

        // pega o indice da subpasta no vetor global drive
        int filho_idx = p->subpastas_indices[i];

        // chama a funcao recursivamente para a subpasta
        // soma o tamanho retornado ao tamanho total da pasta atual
        p->tamanho_total += processarHierarquiaPtr(&drive[filho_idx], nivel_atual + 1, limite_profundidade);
    }

    // imprime espacos para representar o nivel da hierarquia
    for (int i = 0; i < nivel_atual; i++) printf("  ");

    // imprime o nome da pasta e o tamanho total calculado
    // tambem exibe alerta se ultrapassar o limite definido
    printf("|-- %s [%.2f GB]%s\n", p->nome, p->tamanho_total, 
           (p->tamanho_total > LIMITE_ALERTA ? " [!] ALERTA" : ""));

    // retorna o tamanho total da pasta
    return p->tamanho_total;
}