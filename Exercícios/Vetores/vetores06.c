#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];

    // Preencher o vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Algoritmo de ordenação: Bubble Sort em ordem decrescente
    for (int i = 0; i < TAMANHO - 1; i++) {
        for (int j = 0; j < TAMANHO - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                // Trocar os elementos se estiverem fora de ordem
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibir o vetor resultante da ordenação decrescente
    printf("\nVetor Resultante da Ordenação Decrescente:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
