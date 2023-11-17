#include <stdio.h>

#define TAMANHO_VETOR 20

int main() {
    // Declarar vetores
    char vetorA[TAMANHO_VETOR];
    char vetorB[TAMANHO_VETOR];
    char temp;

    // Preencher os vetores A e B com vinte caracteres cada
    printf("Digite vinte caracteres para o vetor A:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf(" %c", &vetorA[i]);
    }

    printf("\nDigite vinte caracteres para o vetor B:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf(" %c", &vetorB[i]);
    }

    // Mostrar vetores antes da troca
    printf("\nVetores antes da troca:\n");
    printf("Vetor A: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%c ", vetorA[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%c ", vetorB[i]);
    }

    // Realizar as trocas
    for (int i = 0; i < TAMANHO_VETOR / 2; i++) {
        temp = vetorA[i];
        vetorA[i] = vetorB[TAMANHO_VETOR - 1 - i];
        vetorB[TAMANHO_VETOR - 1 - i] = temp;
    }

    // Mostrar vetores depois da troca
    printf("\n\nVetores depois da troca:\n");
    printf("Vetor A: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%c ", vetorA[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%c ", vetorB[i]);
    }

    return 0;
}
