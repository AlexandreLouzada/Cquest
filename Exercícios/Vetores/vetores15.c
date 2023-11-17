#include <stdio.h>

#define TAMANHO_VETOR1 10
#define TAMANHO_VETOR2 5

int main() {
    // Declarar vetores
    int vetor1[TAMANHO_VETOR1];
    int vetor2[TAMANHO_VETOR2];

    // Preencher o primeiro vetor com dez números inteiros
    printf("Digite dez números inteiros para o primeiro vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR1; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Preencher o segundo vetor com cinco números inteiros
    printf("\nDigite cinco números inteiros para o segundo vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR2; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Mostrar lista de números do primeiro vetor, seus divisores e posições
    printf("\nLista de números, seus divisores e posições:\n");
    for (int i = 0; i < TAMANHO_VETOR1; i++) {
        printf("\nNúmero %d (Posição %d):\n", vetor1[i], i + 1);

        // Verificar divisores e mostrar suas posições
        for (int j = 0; j < TAMANHO_VETOR2; j++) {
            if (vetor1[i] % vetor2[j] == 0) {
                printf("  - Divisor %d (Posição %d)\n", vetor2[j], j + 1);
            }
        }
    }

    return 0;
}
