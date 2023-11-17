#include <stdio.h>

#define NUM_CARROS 5

int main() {
    // Declarar vetores para armazenar modelos e consumos
    char modelos[NUM_CARROS][50];
    float consumos[NUM_CARROS];

    // Preencher os vetores com modelos e consumos
    for (int i = 0; i < NUM_CARROS; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", modelos[i]);
        printf("Digite o consumo do carro %d (em km por litro): ", i + 1);
        scanf("%f", &consumos[i]);
    }

    // Encontrar o modelo mais econômico
    int indiceCarroMaisEconomico = 0;
    for (int i = 1; i < NUM_CARROS; i++) {
        if (consumos[i] > 0 && consumos[i] < consumos[indiceCarroMaisEconomico]) {
            indiceCarroMaisEconomico = i;
        }
    }

    // Mostrar o modelo mais econômico
    printf("\nO modelo mais econômico é: %s\n", modelos[indiceCarroMaisEconomico]);

    // Calcular e mostrar os litros de combustível necessários para percorrer 1.000 km
    printf("\nLitros de combustível necessários para percorrer 1.000 km:\n");
    for (int i = 0; i < NUM_CARROS; i++) {
        if (consumos[i] > 0) {
            float litros = 1000 / consumos[i];
            printf("%s: %.2f litros\n", modelos[i], litros);
        } else {
            printf("%s: Consumo inválido\n", modelos[i]);
        }
    }

    return 0;
}
