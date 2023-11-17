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

    // Calcular e mostrar vetores resultantes
    int vetorPares[TAMANHO_VETOR1];
    int vetorImpares[TAMANHO_VETOR1];

    for (int i = 0; i < TAMANHO_VETOR1; i++) {
        vetorPares[i] = 0;
        vetorImpares[i] = 0;

        for (int j = 0; j < TAMANHO_VETOR2; j++) {
            int resultado = vetor1[i] + vetor2[j];

            if (resultado % 2 == 0) {
                vetorPares[i] += resultado;
            } else {
                vetorImpares[i] += resultado;
            }
        }
    }

    // Mostrar vetores resultantes
    printf("\nVetor de números pares resultantes:\n");
    for (int i = 0; i < TAMANHO_VETOR1; i++) {
        printf("%d ", vetorPares[i]);
    }

    printf("\nVetor de números ímpares resultantes:\n");
    for (int i = 0; i < TAMANHO_VETOR1; i++) {
        printf("%d ", vetorImpares[i]);
    }

    return 0;
}
