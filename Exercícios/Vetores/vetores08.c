#include <stdio.h>

#define TAMANHO 5

int main() {
    int vetor1[TAMANHO];
    int vetor2[TAMANHO];
    int vetorResultado[TAMANHO * 2];

    // Preencher o primeiro vetor
    printf("Digite 5 números para o primeiro vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Preencher o segundo vetor
    printf("\nDigite 5 números para o segundo vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Ordenar os vetores
    for (int i = 0; i < TAMANHO - 1; i++) {
        for (int j = 0; j < TAMANHO - 1 - i; j++) {
            if (vetor1[j] > vetor1[j + 1]) {
                // Trocar os elementos se estiverem fora de ordem
                int temp = vetor1[j];
                vetor1[j] = vetor1[j + 1];
                vetor1[j + 1] = temp;
            }

            if (vetor2[j] > vetor2[j + 1]) {
                // Trocar os elementos se estiverem fora de ordem
                int temp = vetor2[j];
                vetor2[j] = vetor2[j + 1];
                vetor2[j + 1] = temp;
            }
        }
    }

    // Mesclar os vetores ordenados
    int indice1 = 0;
    int indice2 = 0;

    for (int i = 0; i < TAMANHO * 2; i++) {
        if (indice1 < TAMANHO && (indice2 >= TAMANHO || vetor1[indice1] < vetor2[indice2])) {
            vetorResultado[i] = vetor1[indice1++];
        } else {
            vetorResultado[i] = vetor2[indice2++];
        }
    }

    // Exibir o vetor resultante
    printf("\nVetor Resultante (ordenado):\n");
    for (int i = 0; i < TAMANHO * 2; i++) {
        printf("%d ", vetorResultado[i]);
    }

    printf("\n");

    return 0;
}
