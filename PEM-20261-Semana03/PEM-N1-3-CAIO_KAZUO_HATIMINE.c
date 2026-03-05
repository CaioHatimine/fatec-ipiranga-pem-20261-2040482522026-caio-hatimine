//CAIO KAZUO HATIMINE
//objetivo: desenvolver um programa de CRUD para id's de produtos 

#include <stdio.h> 
// Inclui a biblioteca padrão de entrada e saída (printf, scanf)

struct Produto {
    int id; 
};
// Define uma estrutura chamada Produto que possui apenas um campo inteiro chamado id

int main() {
    
    struct Produto produto[10]; 
    // Cria um vetor de 10 posições do tipo Produto
    
    int posicao, id, quantidade = 0; 
    // posicao = guarda a posição encontrada
    // id = armazena o id digitado pelo usuário
    // quantidade = controla quantos produtos foram cadastrados
    
    int i = 0, cont; 
    // i controla o loop principal
    // cont é usado como contador nos loops
    
    while (i == 0) { 
    // Loop principal do programa (executa até o usuário escolher sair)
    
    int opcoes; 
    // Variável que guarda a opção escolhida no menu
    
    printf("\n===== MENU =====\n");
    printf("escolha uma das opcoes:\n");
    printf("1-criacao do id para o produto\n");
    printf("2-consulta de um id de produto\n");
    printf("3-alteracao do id de um produto\n");
    printf("4-exclusao de um id de um produto\n");
    printf("5-lista de todos os produtos\n");
    printf("6-encerrar programa\n");
    printf("digite a opcao desejada: \n");
    scanf("%d",&opcoes); 
    // Lê a opção escolhida pelo usuário
    
    switch (opcoes) { 
    // Estrutura de decisão baseada na opção escolhida
    
    case 1:
        // Cadastro de um novo produto
        
        if (quantidade >= 10) {
            // Verifica se o limite do vetor foi atingido
            printf("limite atingido\n");
        }
        else {
            printf("agora, digite um id para o produto: ");
            scanf("%d",&produto[quantidade].id);
            // Armazena o id na próxima posição disponível
            
            quantidade++; 
            // Incrementa a quantidade de produtos cadastrados
            
            printf("produto cadastrado");
        }
        break;
        
    case 2:
        // Consulta de um produto pelo id
        
        printf("digite um id: ");
        scanf("%d", &id);
        
        posicao = -1; 
        // Inicializa como -1 (indica que não foi encontrado)
        
        for (cont = 0; cont < quantidade; cont++) {
            // Percorre todos os produtos cadastrados
            
            if (produto[cont].id == id) {
                // Verifica se o id é igual ao digitado
                posicao = cont;
            }
        }
        
        if (posicao != -1) {
            // Se encontrou
            printf("produto na posicao: %d\n", posicao);
        }
        else {
            // Se não encontrou
            printf("produto nao encontrado\n");
        }
        break;
        
    case 3:
        // Alteração de um id existente
        
        printf("digite um id: ");
        scanf("%d",&id);
        
        posicao = -1;
        
        for(cont = 0; cont < quantidade; cont++) {
            // Procura o produto
            
            if(produto[cont].id == id) {
                posicao = cont;
            }
        }
        
        if(posicao != -1) {
            // Se encontrado
            
            printf("digite um novo id: ");
            scanf("%d", &produto[posicao].id);
            // Substitui o id antigo pelo novo
            
            printf("produto alterado\n");
        } 
        else {
            printf("produto nao encontrado\n");
        }
        break;
        
    case 4:
        // Exclusão de um produto
        
        printf("digite o id para excluir: ");
        scanf("%d", &id);
        
        posicao = -1;
        
        for(cont = 0; cont < quantidade; cont++) {
            // Procura o produto
            
            if(produto[cont].id == id) {
                posicao = cont;
            }
        }
        
        if(posicao != -1) {
            // Se encontrado
            
            for(cont = posicao; cont < quantidade - 1; cont++) {
                // Desloca os elementos para "fechar o espaço"
                produto[cont] = produto[cont + 1];
            }
            
            quantidade--; 
            // Diminui a quantidade de produtos
            
            printf("produto removido\n");
        } 
        else {
            printf("produto nao encontrado\n");
        }
        break;
        
    case 5:
        // Lista todos os produtos cadastrados
        
        if(quantidade == 0) {
            printf("nenhum produto cadastrado\n");
        } 
        else {
            printf("lista de produtos:\n");
            
            for(cont = 0; cont < quantidade; cont++) {
                // Percorre e imprime cada produto
                
                printf("posicao %d - id: %d\n", cont, produto[cont].id);
            }
        }
        break;
        
    case 6:
        // Encerra o programa
        
        printf("programa encerrado\n");

        return 0;
        //Finaliza o programa
    default:
        // Caso o usuário digite uma opção inválida
        
        printf("opcao nao valida");
        break;
    }
    }
}