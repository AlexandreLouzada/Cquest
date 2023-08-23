#include <stdio.h>

int main(void) {
    float distanciaKm, distanciaMetros;

    // Leitura da distância em quilômetros
    printf("Digite a distância em quilômetros: ");
    scanf("%f", &distanciaKm);

    // Calcula a distância em metros (1 km = 1000 metros)
    distanciaMetros = distanciaKm * 1000;

    // Imprime a distância em metros
    printf("A distância em metros é: %.2f metros\n", distanciaMetros);

    return 0;
}
