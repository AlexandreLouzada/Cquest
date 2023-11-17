#include <stdio.h>
#include <stdlib.h>

#define NUM_JOGADAS 20
#define NUM_LADOS_DADO 6

int main() {
    // Declarar variáveis
    int numerosSorteados[NUM_JOGADAS];
    int frequencia[NUM_LADOS_DADO] = {0};

    // Inicializar semente para geração de números aleatórios
    srand(time(NULL));

    // Simular vinte jogadas de dado
    printf("Números sorteados em vinte jogadas de dado:\n");
    for (int i = 0; i < NUM_JOGADAS; i++) {
        numerosSorteados[i] = rand() % NUM_LADOS_DADO + 1;  // Números entre 1 e 6
        printf("%d ", numerosSorteados[i]);

        // Atualizar a frequência do número sorteado
        frequencia[numerosSorteados[i] - 1]++;
    }

    // Mostrar a frequência de cada número sorteado
    printf("\nFrequência de cada número sorteado:\n");
    for (int i = 0; i < NUM_LADOS_DADO; i++) {
        printf("Número %d: %d vezes\n", i + 1, frequencia[i]);
    }

    return 0;
}
