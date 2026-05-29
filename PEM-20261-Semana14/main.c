#include <stdio.h>
#include "stringutil.h"

int main() {

    char s1[] = "radar";
    char s2[] = "programacao";

    printf("Vogais em %s: %d\n", s1, contaVogais(s1));
    printf("Vogais em %s: %d\n", s2, contaVogais(s2));

    inverteCString(s2);

    printf("String invertida: %s\n", s2);

    printf("radar eh palindromo? %d\n", ePalindromo(s1));
    printf("programa eh palindromo? %d\n", ePalindromo("programa"));

    return 0;
}