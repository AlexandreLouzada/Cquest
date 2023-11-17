#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    // Declarar o vetor
    int numeros[TAMANHO_VETOR];

    // Preencher o vetor com números inteiros
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Verificar e mostrar os números superiores a cinquenta e suas posições
    int encontrouNumero = 0;
    printf("\nNúmeros superiores a cinquenta e suas posições:\n");

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] > 50) {
            encontrouNumero = 1;
            printf("Número: %d, Posição: %d\n", numeros[i], i + 1);
        }
    }

    // Mostrar mensagem se não existir nenhum número superior a cinquenta
    if (!encontrouNumero) {
        printf("Não existem números superiores a cinquenta no vetor.\n");
    }

    return 0;
}
