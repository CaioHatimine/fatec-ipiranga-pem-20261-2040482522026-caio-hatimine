//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

struct FichaAluno {
    char nome[50];
    int numeroMatricula;
    float notaMedia;
};

int main() {

    struct FichaAluno alunoExemplo = {"Bruno Almeida", 94821, 8.75f};
    
    printf("=== MAPEAMENTO DE MEMORIA DA ESTRUTURA ===\n\n");
    printf("Endereco base do Aluno:    %p\n", (void*)&alunoExemplo);
    printf("-----------------------------------------\n");
    printf("-> Campo [nome]:           %p\n", (void*)&alunoExemplo.nome);
    printf("-> Campo [matricula]:      %p\n", (void*)&alunoExemplo.numeroMatricula);
    printf("-> Campo [notaMedia]:      %p\n", (void*)&alunoExemplo.notaMedia);
     
    return 0;
}