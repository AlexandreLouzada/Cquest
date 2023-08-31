#include <stdio.h>

int main(void) {
    float quilometragem_inicial, quilometragem_final, quilometragem_percorrida;

    // Solicita a quilometragem inicial
    printf("Digite a quilometragem inicial: ");
    scanf("%f", &quilometragem_inicial);

    // Solicita a quilometragem final
    printf("Digite a quilometragem final: ");
    scanf("%f", &quilometragem_final);

    // Calcula a quilometragem percorrida
    quilometragem_percorrida = quilometragem_final - quilometragem_inicial;

    // Imprime a quilometragem percorrida
    printf("A quilometragem percorrida foi: %.2f\n", quilometragem_percorrida);

    return 0;
}
