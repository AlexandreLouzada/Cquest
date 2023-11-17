#include <stdio.h>

int main() {
    // Declarar variáveis
    int numero;
    int numerosPares[6];
    int numerosImpares[6];
    int somaPares = 0;
    int quantidadeImpares = 0;

    // Receber seis números inteiros
    printf("Digite seis números inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numero);

        // Verificar se é par ou ímpar
        if (numero % 2 == 0) {
            // Armazenar número par e somar à somaPares
            numerosPares[i] = numero;
            somaPares += numero;
        } else {
            // Armazenar número ímpar e incrementar quantidadeImpares
            numerosImpares[quantidadeImpares] = numero;
            quantidadeImpares++;
        }
    }

    // Mostrar números pares
    printf("\nNúmeros pares digitados:\n");
    for (int i = 0; i < 6; i++) {
        if (numerosPares[i] % 2 == 0) {
            printf("%d ", numerosPares[i]);
        }
    }

    // Mostrar soma dos números pares
    printf("\nSoma dos números pares: %d\n", somaPares);

    // Mostrar números ímpares
    printf("\nNúmeros ímpares digitados:\n");
    for (int i = 0; i < quantidadeImpares; i++) {
        printf("%d ", numerosImpares[i]);
    }

    // Mostrar quantidade de números ímpares
    printf("\nQuantidade de números ímpares: %d\n", quantidadeImpares);

    return 0;
}
