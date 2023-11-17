#include <stdio.h>

#define TAMANHO 8

int main() {
    int vetor[TAMANHO];

    // Preencher o vetor de forma ordenada
    printf("Digite 8 números inteiros (em ordem crescente):\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        // Manter o vetor ordenado após cada inserção
        int j = i - 1;
        int valorAtual = vetor[i];

        // Deslocar elementos para a direita até encontrar a posição correta para inserir o novo valor
        while (j >= 0 && vetor[j] > valorAtual) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        // Inserir o novo valor na posição correta
        vetor[j + 1] = valorAtual;
    }

    // Exibir o vetor resultante
    printf("\nVetor Resultante (ordenado):\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
