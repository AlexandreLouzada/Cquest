#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor1[TAMANHO];
    int vetor2[TAMANHO];
    int intercalacao[TAMANHO * 2]; // Vetor resultante da intercalação

    // Preencher o primeiro vetor
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Preencher o segundo vetor
    printf("\nDigite os elementos do segundo vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Intercalar os vetores
    int indiceResultado = 0;
    for (int i = 0; i < TAMANHO; i++) {
        intercalacao[indiceResultado++] = vetor1[i];
        intercalacao[indiceResultado++] = vetor2[i];
    }

    // Exibir o resultado da intercalação
    printf("\nResultado da Intercalação:\n");
    for (int i = 0; i < TAMANHO * 2; i++) {
        printf("%d ", intercalacao[i]);
    }
    printf("\n");

    return 0;
}
