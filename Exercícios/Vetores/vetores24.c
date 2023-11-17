#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int vetor[TAMANHO_VETOR];

    // Preencher o vetor com números inteiros
    printf("Digite os elementos do vetor A de inteiros:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificar elementos repetidos
    int repeticoes[TAMANHO_VETOR] = {0};  // Inicializar vetor de repetições com zeros

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        for (int j = i + 1; j < TAMANHO_VETOR; j++) {
            if (vetor[i] == vetor[j]) {
                repeticoes[i]++;
            }
        }
    }

    // Mostrar elementos repetidos e suas repetições
    printf("\nElementos repetidos e suas repetições:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (repeticoes[i] > 0) {
            printf("%d se repete %d vez(es)\n", vetor[i], repeticoes[i] + 1);
        }
    }

    return 0;
}
