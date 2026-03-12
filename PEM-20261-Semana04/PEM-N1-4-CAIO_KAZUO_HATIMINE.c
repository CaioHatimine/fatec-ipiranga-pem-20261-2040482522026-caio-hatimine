//CAIO KAZUO HATIMINE
//OBJETIVO: FAZER UM JOGO DA VELHA FUNCIONAL E INTERATIVO

#include <stdio.h>

// Define o tamanho do tabuleiro (3x3)
#define TAM 3

// Define o caractere que representa uma posição vazia
#define VAZIO ' '

int main() {

    // Matriz que representa o tabuleiro do jogo
    char tabuleiro[TAM][TAM];

    // Jogador atual começa sendo 'X'
    char jogador_atual = 'X';

    // Variável que indica se alguém venceu (0 = não, 1 = sim)
    int vencedor = 0;

    // Variáveis para armazenar linha e coluna digitadas pelo jogador
    int linha, coluna;

    // Contador de jogadas (máximo possível é 9)
    int jogadas = 0;


    // 1. INICIALIZAÇÃO DO TABULEIRO
    // Preenche todas as posições com espaço vazio

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            tabuleiro[i][j] = VAZIO;
        }
    }


    // 2. LAÇO PRINCIPAL DO JOGO
    // Continua enquanto:
    // - houver menos de 9 jogadas
    // - não houver vencedor

    while(jogadas < 9 && !vencedor){

        printf("\n");

        // Exibe o tabuleiro atual
        for(int i = 0; i < TAM; i++){
            for(int j = 0; j < TAM; j++){

                // Mostra o símbolo da posição
                printf(" %c ", tabuleiro[i][j]);

                // Coloca divisória vertical
                if(j < 2)
                    printf("|");
            }

            printf("\n");

            // Coloca divisória horizontal
            if(i < 2)
                printf("---+---+---\n");
        }


        // Solicita ao jogador a posição da jogada

        printf("\nJogador %c, digite linha e coluna (0-2): ", jogador_atual);
        scanf("%d %d", &linha, &coluna);


        // VALIDAÇÃO DA POSIÇÃO
        // Verifica se está dentro do tabuleiro

        if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2){
            printf("Posicao invalida! Tente novamente.\n");
            continue; // volta para o início do laço
        }

        // Verifica se a posição já está ocupada
        if(tabuleiro[linha][coluna] != VAZIO){
            printf("Posicao ocupada! Tente novamente.\n");
            continue;
        }


        // ATUALIZAÇÃO DO TABULEIRO
        // Coloca o símbolo do jogador na posição escolhida

        tabuleiro[linha][coluna] = jogador_atual;

        // Incrementa o número de jogadas
        jogadas++;

        // 3. VERIFICAÇÃO DE VITÓRIA


        // Verifica as linhas
        for(int i = 0; i < TAM; i++){
            if(tabuleiro[i][0] == jogador_atual &&
               tabuleiro[i][1] == jogador_atual &&
               tabuleiro[i][2] == jogador_atual){
                vencedor = 1;
            }
        }

        // Verifica as colunas
        for(int j = 0; j < TAM; j++){
            if(tabuleiro[0][j] == jogador_atual &&
               tabuleiro[1][j] == jogador_atual &&
               tabuleiro[2][j] == jogador_atual){
                vencedor = 1;
            }
        }

        // Verifica a diagonal principal
        if(tabuleiro[0][0] == jogador_atual &&
           tabuleiro[1][1] == jogador_atual &&
           tabuleiro[2][2] == jogador_atual){
            vencedor = 1;
        }

        // Verifica a diagonal secundária
        if(tabuleiro[0][2] == jogador_atual &&
           tabuleiro[1][1] == jogador_atual &&
           tabuleiro[2][0] == jogador_atual){
            vencedor = 1;
        }


        // ALTERNAR JOGADOR
        // Se ninguém venceu, troca o jogador
        if(!vencedor){
            if(jogador_atual == 'X')
                jogador_atual = 'O';
            else
                jogador_atual = 'X';
        }
    }


    // EXIBIÇÃO DO TABULEIRO FINAL

    printf("\nTabuleiro final:\n");

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){

            printf(" %c ", tabuleiro[i][j]);

            if(j < 2)
                printf("|");
        }

        printf("\n");

        if(i < 2)
            printf("---+---+---\n");
    }

  
    // 4. RESULTADO FINAL
  
    // Se houver vencedor
    if(vencedor)
        printf("\nO jogador %c venceu!\n", jogador_atual);

    // Se não houver vencedor e o tabuleiro estiver cheio
    else
        printf("\nO jogo terminou em empate.\n");

    return 0;
}