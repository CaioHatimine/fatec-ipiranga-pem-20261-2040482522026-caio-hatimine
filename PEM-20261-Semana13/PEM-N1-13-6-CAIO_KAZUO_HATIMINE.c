//CAIO KAZUO HATIMINE - RA: 026 - ADS VESPERTINO 2SEMESTRE

#include <stdio.h>
#include <string.h>

struct CadastroProduto {
    char descricao[40];
    float valorUnitario;
    int qtdEstoque;
};

int main() {
    struct CadastroProduto item;
    struct CadastroProduto *pItem = &item;
    
    strcpy((*pItem).descricao, "Teclado Mecanico RGB");
    (*pItem).valorUnitario = 249.90f;
    (*pItem).qtdEstoque = 15;
    
    printf("=== DADOS VIA SINTAXE MANUAL (*pItem). ===\n");
    printf("Item: %s | Preco: R$%.2f | Estoque: %d\n\n", 
           (*pItem).descricao, 
           (*pItem).valorUnitario, 
           (*pItem).qtdEstoque); 
    
    return 0;
}