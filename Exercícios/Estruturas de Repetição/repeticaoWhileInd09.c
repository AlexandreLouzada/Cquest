#include <stdio.h>

int main() {
    int fahrenheit;

    printf("Fahrenheit   Celsius\n");

    while (1) {
        printf("Digite a temperatura em Fahrenheit (ou digite -1 para encerrar): ");
        scanf("%d", &fahrenheit);

        if (fahrenheit == -1) {
            break; // Encerra o loop se o usuário digitar -1
        }

        float celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3d           %.2f\n", fahrenheit, celsius);
    }

    return 0;
}
