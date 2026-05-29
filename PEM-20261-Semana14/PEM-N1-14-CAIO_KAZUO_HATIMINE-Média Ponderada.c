#include <stdio.h>

int main() {
    double n1, n2, n3;
    int p1, p2, p3;
    double media;

    printf("Digite as 3 notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    printf("Digite os 3 pesos: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("Media ponderada: %.2lf\n", media);

    printf("sizeof(double): %zu bytes\n", sizeof(double));
    printf("sizeof(int): %zu bytes\n", sizeof(int));

    return 0;
}