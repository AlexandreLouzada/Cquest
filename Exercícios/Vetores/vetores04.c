#include <stdio.h>

#define TAMANHO 8

int main() {
    int vetorOriginal[TAMANHO];
    int vetorPositivos[TAMANHO];
    int vetorNegativos[TAMANHO];

    // Preencher o vetor original
    printf("Digite oito números inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorOriginal[i]);
    }

    // Inicializar contadores para os vetores resultantes
    int indicePositivos = 0;
    int indiceNegativos = 0;

    // Separar os números positivos e negativos
    for (int i = 0; i < TAMANHO; i++) {
        if (vetorOriginal[i] >= 0) {
            // Armazenar em vetor de positivos
            if (indicePositivos < TAMANHO) {
                vetorPositivos[indicePositivos++] = vetorOriginal[i];
            } else {
                printf("Atingido o limite de posições para o vetor de positivos.\n");
            }
        } else {
            // Armazenar em vetor de negativos
            if (indiceNegativos < TAMANHO) {
                vetorNegativos[indiceNegativos++] = vetorOriginal[i];
            } else {
                printf("Atingido o limite de posições para o vetor de negativos.\n");
            }
        }
    }

    // Exibir os resultados
    printf("\nVetor de Positivos:\n");
    for (int i = 0; i < indicePositivos; i++) {
        printf("%d ", vetorPositivos[i]);
    }

    printf("\n\nVetor de Negativos:\n");
    for (int i = 0; i < indiceNegativos; i++) {
        printf("%d ", vetorNegativos[i]);
    }

    printf("\n");

    return 0;
}
