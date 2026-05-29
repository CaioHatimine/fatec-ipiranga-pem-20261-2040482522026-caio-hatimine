#include <stdio.h>

int main() {
    double a, b, c;
    double maior, x, y;

    printf("Digite os 3 lados: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && b == c)
            printf("Equilatero\n");
        else if (a == b || a == c || b == c)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");

        maior = a;

        if (b > maior) maior = b;
        if (c > maior) maior = c;

        if (maior == a) {
            x = b;
            y = c;
        } else if (maior == b) {
            x = a;
            y = c;
        } else {
            x = a;
            y = b;
        }

        double m2 = maior * maior;
        double soma = x * x + y * y;

        if (m2 == soma)
            printf("Retangulo\n");
        else if (m2 > soma)
            printf("Obtusangulo\n");
        else
            printf("Acutangulo\n");

    } else {
        printf("Nao forma triangulo.\n");
    }

    return 0;
}