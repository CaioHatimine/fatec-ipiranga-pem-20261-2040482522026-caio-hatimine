//caio kazuo hatimine
//15/03/26
//objetivo: modularização de uma solução software. Adicionalmente objetiva consolidar a manipulação de matrizes multidimensionais.

#include <stdio.h>
#include <stdlib.h>

// define o tamanho do tabuleiro (8x8)
#define TAM 8

// função responsável por imprimir o tabuleiro
void imprimirTabuleiro(char tab[TAM][TAM]) {

    // imprime as letras das colunas
    printf("\n  A B C D E F G H\n");

    // percorre as linhas
    for (int i = 0; i < TAM; i++) {

        // mostra a numeração das linhas (8 até 1)
        printf("%d ", 8 - i);

        // percorre as colunas
        for (int j = 0; j < TAM; j++) {

            // imprime cada posição do tabuleiro
            printf("%c ", tab[i][j]);
        }

        printf("\n");
    }
}

// função que inicializa o tabuleiro com as peças
void inicializarTabuleiro(char tab[TAM][TAM]) {

    // Vetores com as peças iniciais
    char pecasPretas[] = {'t','c','b','d','r','b','c','t'};
    char pecasBrancas[] = {'T','C','B','D','R','B','C','T'};

    // preenche a primeira e segunda linha (pretas)
    for (int i = 0; i < TAM; i++) {
        tab[0][i] = pecasPretas[i]; // peças principais
        tab[1][i] = 'p';            // peões
        tab[6][i] = 'P';            // peões brancos
        tab[7][i] = pecasBrancas[i]; // peças principais brancas
    }

    // preenche o meio do tabuleiro com casas vazias
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < TAM; j++) {
            tab[i][j] = '.'; 
        }
    }
}

// função para mover uma peça no tabuleiro
void mover(char tab[TAM][TAM], int li, int ci, int lf, int cf) {

    // move a peça da posição inicial para a final
    tab[lf][cf] = tab[li][ci];

    // deixa a posição inicial vazia
    tab[li][ci] = '.';
}

// função para pausar a execução até o usuário apertar ENTER
void pausa() {
    printf("\nPressione ENTER para continuar...\n");
    getchar(); // espera entrada do usuário
}

int main() {

    // declaração da matriz que representa o tabuleiro
    char tab[TAM][TAM];

    // inicializa o tabuleiro com as peças
    inicializarTabuleiro(tab);

    // estado inicial
    printf("Posicao inicial:\n");
    imprimirTabuleiro(tab);
    pausa();

    // jogada 1

    // branco: peão E2 -> E4
    mover(tab, 6, 4, 4, 4);
    printf("\nJogada 1: Branco (E2 -> E4)\n");
    imprimirTabuleiro(tab);
    pausa();

    // preto: peão E7 -> E5
    mover(tab, 1, 4, 3, 4);
    printf("\nJogada 1: Preto (E7 -> E5)\n");
    imprimirTabuleiro(tab);
    pausa();


    // jogada 2


    // branco: bispo F1 -> C4
    mover(tab, 7, 5, 4, 2);
    printf("\nJogada 2: Branco (F1 -> C4)\n");
    imprimirTabuleiro(tab);
    pausa();

    // preto: cavalo G8 -> F6
    mover(tab, 0, 6, 2, 5);
    printf("\nJogada 2: Preto (G8 -> F6)\n");
    imprimirTabuleiro(tab);
    pausa();


    // jogada 3


    // branco: dama D1 -> H5
    mover(tab, 7, 3, 3, 7);
    printf("\nJogada 3: Branco (D1 -> H5)\n");
    imprimirTabuleiro(tab);
    pausa();

    // preto: cavalo B8 -> C6
    mover(tab, 0, 1, 2, 2);
    printf("\nJogada 3: Preto (B8 -> C6)\n");
    imprimirTabuleiro(tab);
    pausa();


    // jogada final
   

    // branco: dama H5 -> F7 
    mover(tab, 3, 7, 1, 5);
    printf("\nJogada FINAL: Branco (H5 -> F7) XEQUE-MATE!\n");
    imprimirTabuleiro(tab);

    printf("\nFim da demonstracao.\n");

    return 0;
}