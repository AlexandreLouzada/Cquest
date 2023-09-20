#include <stdio.h>

int main() {
    float velocidadeMedia, tempoGasto, distancia, litrosUsados;

    // Solicita a entrada do usuário para a velocidade média e o tempo gasto na viagem
    printf("Digite a velocidade média (Km/h): ");
    scanf("%f", &velocidadeMedia);

    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%f", &tempoGasto);

    // Calcula a distância percorrida
    distancia = velocidadeMedia * tempoGasto;

    // Calcula a quantidade de litros usados
    litrosUsados = distancia / 12.0; // 1 litro a cada 12 Km

    // Exibe os resultados
    printf("Velocidade Média: %.2f Km/h\n", velocidadeMedia);
    printf("Tempo Gasto na Viagem: %.2f horas\n", tempoGasto);
    printf("Distância Percorrida: %.2f Km\n", distancia);
    printf("Litros Utilizados na Viagem: %.2f litros\n", litrosUsados);

    return 0;
}
