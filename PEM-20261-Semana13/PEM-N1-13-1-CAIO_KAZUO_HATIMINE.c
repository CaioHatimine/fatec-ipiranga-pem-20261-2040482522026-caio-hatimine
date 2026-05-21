//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>

int main() {
   
    int idade = 28;
    float salario = 3500.50f;
    char statusItem = 'A'; // 'A' de Ativo
    
    
    int *pIdade = &idade;
    float *pSalario = &salario;
    char *pStatus = &statusItem;
    
    printf("=== SISTEMA DE AUDITORIA DE MEMORIA ===\n\n");
    
    printf("[Dados de Idade]\n");
    printf("  Valor real guardado: %d anos\n", idade);
    printf("  Onde esta na RAM?    %p\n", (void*)&idade);
    printf("  Endereco no ponteiro:%p\n", (void*)pIdade);
    printf("  Acesso indireto (*): %d\n\n", *pIdade);
    
    printf("[Dados de Salario]\n");
    printf("  Valor real guardado: R$ %.2f\n", salario);
    printf("  Onde esta na RAM?    %p\n", (void*)&salario);
    printf("  Endereco no ponteiro:%p\n", (void*)pSalario);
    printf("  Acesso indireto (*): R$ %.2f\n\n", *pSalario);
    
    printf("[Status do Registro]\n");
    printf("  Valor real guardado: %c\n", statusItem);
    printf("  Onde esta na RAM?    %p\n", (void*)&statusItem);
    printf("  Endereco no ponteiro:%p\n", (void*)pStatus);
    printf("  Acesso indireto (*): %c\n", *pStatus);
    
    return 0;
}