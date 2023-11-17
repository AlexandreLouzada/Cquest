#include <stdio.h>

int main() {
    int vetor[9];

    // Preencher o vetor
    printf("Digite 9 números inteiros:\n");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificar e mostrar números primos
    printf("\nNúmeros primos e suas posições:\n");
    for (int i = 0; i < 9; i++) {
        int ehPrimo = 1; // Assume que o número é primo inicialmente

        if (vetor[i] <= 1) {
            ehPrimo = 0; // Não é primo se for menor ou igual a 1
        } else {
            for (int j = 2; j <= vetor[i] / 2; j++) {
                if (vetor[i] % j == 0) {
                    ehPrimo = 0; // Não é primo se for divisível por algum número
                    break;
                }
            }
        }

        if (ehPrimo) {
            printf("Posição %d: %d\n", i, vetor[i]);
        }
    }

    return 0;
}
