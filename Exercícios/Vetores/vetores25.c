#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int vetor[TAMANHO_VETOR];
    int contador = 0;
    int candidato = 101; // Primeiro número primo acima de 100

    while (contador < TAMANHO_VETOR) {
        int ehPrimo = 1; // Assumir que o número candidato é primo

        for (int i = 2; i * i <= candidato; i++) {
            if (candidato % i == 0) {
                ehPrimo = 0; // Não é primo
                break;
            }
        }

        if (ehPrimo) {
            vetor[contador] = candidato;
            contador++;
        }

        candidato++;
    }

    // Mostrar o vetor resultante
    printf("Os dez primeiros números primos acima de 100 são:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
