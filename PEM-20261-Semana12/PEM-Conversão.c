//CAIO KAZUO HATIMINE
//RA: 026
//24/04/26
//objetivo: conversao de paradigma
#include <stdio.h>
#include <string.h>
#include <time.h>

// definicao de limites para o sistema
#define MAX_PASTAS 50
#define LIMITE_ALERTA 300.0

// estrutura de dados para representar as pastas
typedef struct {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    int subpastas_indices[10];
    int qtd_sub;
} Pasta;

// banco de dados global simulado
Pasta drive[MAX_PASTAS];

// funcao que executa a busca de forma iterativa usando uma pilha
void processarHierarquiaIterativo(int raiz_idx, int limite_profundidade) {
    // vetor que funciona como uma pilha de indices
    int pilha[MAX_PASTAS];
    // vetor para controlar o nivel de profundidade de cada item
    int niveis[MAX_PASTAS];
    // ponteiro para o topo da pilha inicializado como vazio
    int topo = -1;

    // adiciona o primeiro elemento na pilha
    topo++;
    pilha[topo] = raiz_idx;
    niveis[topo] = 0;

    // laco principal que substitui a recursividade
    while (topo >= 0) {
        // retira o item do topo para processamento
        int idx_atual = pilha[topo];
        int nivel_atual = niveis[topo];
        topo--;

        // verifica se a pasta esta dentro do limite de profundidade
        if (nivel_atual <= limite_profundidade) {
            // usa ponteiro para acessar os dados da pasta atual
            Pasta *p = &drive[idx_atual];
            
            // define o tamanho inicial
            p->tamanho_total = p->tamanho_proprio;

            // gera o recuo visual baseado no nivel atual
            for (int i = 0; i < nivel_atual; i++) printf("  ");
            
            // imprime os dados da pasta no console
            printf("|-- %s [%.2f gb]", p->nome, p->tamanho_proprio);
            
            // verifica se o tamanho excede o limite de seguranca
            if (p->tamanho_proprio > LIMITE_ALERTA) printf(" [!] alerta");
            printf("\n");

            // empilha as subpastas para processar no proximo ciclo do laco
            for (int i = p->qtd_sub - 1; i >= 0; i--) {
                topo++;
                pilha[topo] = p->subpastas_indices[i];
                niveis[topo] = nivel_atual + 1;
            }
        }
    }
}

int main() {
    // bloco de configuracao dos dados de teste
    strcpy(drive[0].nome, "raiz");
    drive[0].tamanho_proprio = 10.0;
    drive[0].qtd_sub = 2;
    drive[0].subpastas_indices[0] = 1;
    drive[0].subpastas_indices[1] = 2;

    strcpy(drive[1].nome, "projetos_ti");
    drive[1].tamanho_proprio = 50.0;
    drive[1].qtd_sub = 1;
    drive[1].subpastas_indices[0] = 3;

    strcpy(drive[2].nome, "backups_antigos");
    drive[2].tamanho_proprio = 350.0;
    drive[2].qtd_sub = 0;

    strcpy(drive[3].nome, "videos_aulas");
    drive[3].tamanho_proprio = 280.0;
    drive[3].qtd_sub = 0;

    // variavel para medir ciclos de processador
    clock_t t;
    // inicia a contagem de tempo
    t = clock();

    // executa a logica principal do programa
    processarHierarquiaIterativo(0, 2);

    // calcula a diferenca de tempo decorrido
    t = clock() - t;
    // converte ciclos de clock para segundos
    double tempo_execucao = ((double)t) / CLOCKS_PER_SEC;

    // exibe o resultado das metricas para o relatorio
    printf("\n--- resultado das metricas ---\n");
    printf("tempo de execucao: %f segundos\n", tempo_execucao);
    printf("ciclos de clock: %ld\n", t);

    return 0;
}