#include <stdio.h>

int main() {
    double peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%lf", &peso);

    printf("Digite a altura (m): ");
    scanf("%lf", &altura);

    if (peso <= 0 || altura <= 0) {
        printf("Valores invalidos.\n");
    } else {
        imc = peso / (altura * altura);

        printf("IMC = %.2lf\n", imc);

        if (imc < 18.5)
            printf("Abaixo do peso\n");
        else if (imc < 25.0)
            printf("Peso normal\n");
        else if (imc < 30.0)
            printf("Sobrepeso\n");
        else
            printf("Obesidade\n");
    }

    return 0;
}