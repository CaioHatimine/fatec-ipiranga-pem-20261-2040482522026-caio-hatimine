#include <stdio.h>
#include "RECURSAO-N1-6-CAIO_KAZUO_HATIMINE.h"
#include "INTERFACE-N1-6-CAIO_KAZUO_HATIMINE.h"

// funcao responsavel pelo menu
void menu()
{
    int opcao;
    int numero;
    int base;
    int expoente;

    do
    {
        printf("\n===== sistema cucc =====\n");
        printf("1 - decimal para binario\n");
        printf("2 - potencia\n");
        printf("3 - soma dos digitos\n");
        printf("0 - sair\n");
        printf("escolha: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:

                printf("digite um numero decimal: ");
                scanf("%d", &numero);

                if(numero == 0)
                {
                    printf("binario: 0\n");
                }
                else
                {
                    printf("binario: ");
                    decToBin(numero);
                    printf("\n");
                }

                break;

            case 2:

                printf("digite a base: ");
                scanf("%d", &base);

                printf("digite o expoente: ");
                scanf("%d", &expoente);

                printf("resultado: %d\n", potencia(base, expoente));

                break;

            case 3:

                printf("digite um numero: ");
                scanf("%d", &numero);

                printf("soma dos digitos: %d\n", somaDigitos(numero));

                break;

            case 0:

                printf("encerrando programa\n");

                break;

            default:

                printf("opcao invalida\n");
        }

    } while(opcao != 0);
}