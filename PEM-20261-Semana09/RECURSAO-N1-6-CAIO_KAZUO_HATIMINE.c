#include <stdio.h>
#include "RECURSAO-N1-6-CAIO_KAZUO_HATIMINE.h"

// funcao recursiva para converter decimal em binario
void decToBin(int n)
{
    // caso base
    if (n == 0)
    {
        return;
    }

    // chamada recursiva
    decToBin(n / 2);

    // exibicao do resto
    printf("%d", n % 2);
}

// funcao recursiva para calcular potencia
int potencia(int base, int exp)
{
    // caso base
    if (exp == 0)
    {
        return 1;
    }

    // chamada recursiva
    return base * potencia(base, exp - 1);
}

// funcao recursiva para somar os digitos
int somaDigitos(int n)
{
    // caso base
    if (n == 0)
    {
        return 0;
    }

    // chamada recursiva
    return (n % 10) + somaDigitos(n / 10);
}