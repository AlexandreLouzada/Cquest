#include <stdio.h>

int main() {
    int numero, quantidadeNumeros = 0, quantidadePares = 0, quantidadeImpares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &numero);

        quantidadeNumeros++;

        if (numero % 2 == 0) {
            quantidadePares++;
        } else {
            quantidadeImpares++;
        }
    }

    printf("Quantidade de números digitados: %d\n", quantidadeNumeros);
    printf("Quantidade de números pares: %d\n", quantidadePares);
    printf("Quantidade de números ímpares: %d\n", quantidadeImpares);

    return 0;
}
