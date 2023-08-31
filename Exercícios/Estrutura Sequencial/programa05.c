#include <stdio.h>

int main() {
    double A, B, C, delta;

    // Leitura dos valores de A, B e C
    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    // Calcula o delta
    delta = B * B - 4 * A * C;

    // Imprime o valor do delta
    printf("O valor do delta é: %lf\n", delta);

    return 0;
}
