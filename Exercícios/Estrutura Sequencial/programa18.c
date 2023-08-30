#include <stdio.h>

int main() {
    float raio, volume;
    const float pi = 3.14;

    // Solicitar o raio da esfera
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    // Calcular o volume da esfera
    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    // Exibir o resultado
    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}
