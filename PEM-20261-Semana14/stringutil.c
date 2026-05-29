#include <stdio.h>
#include <string.h>
#include "stringutil.h"

int contaVogais(char *s) {

    int cont = 0;

    while (*s) {

        char c = *s;

        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' ||
            c == 'O' || c == 'U') {

            cont++;
        }

        s++;
    }

    return cont;
}

void inverteCString(char *s) {

    int ini = 0;
    int fim = strlen(s) - 1;

    while (ini < fim) {

        char temp = s[ini];
        s[ini] = s[fim];
        s[fim] = temp;

        ini++;
        fim--;
    }
}

int ePalindromo(char *s) {

    int ini = 0;
    int fim = strlen(s) - 1;

    while (ini < fim) {

        if (s[ini] != s[fim])
            return 0;

        ini++;
        fim--;
    }

    return 1;
}