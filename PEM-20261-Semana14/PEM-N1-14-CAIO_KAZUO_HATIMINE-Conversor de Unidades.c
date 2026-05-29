#include <stdio.h>

int main() {
    int cm;
    float metros;
    double km, milhas;

    // int suporta grandes valores inteiros
    // float suficiente para metros
    // double oferece maior precisão para km e milhas

    printf("Digite a distancia em centimetros: ");
    scanf("%d", &cm);

    if (cm <= 0) {
        printf("Erro: valor invalido.\n");
    } else {
        metros = cm / 100.0f;
        km = cm / 100000.0;
        milhas = km / 1.60934;

        printf("Metros: %.2f\n", metros);
        printf("Quilometros: %.6lf\n", km);
        printf("Milhas: %.6lf\n", milhas);
    }

    return 0;
}