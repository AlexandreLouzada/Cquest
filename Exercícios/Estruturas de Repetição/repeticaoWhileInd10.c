#include <stdio.h>

int main() {
    int numero, totalNumeros = 0, numerosPares = 0, numerosImpares = 0;

    while (1) {
        printf("Digite um número (ou digite 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop se o usuário digitar 0
        }

        totalNumeros++;

        if (numero % 2 == 0) {
            numerosPares++;
        } else {
            numerosImpares++;
        }
    }

    printf("Quantidade de números digitados: %d\n", totalNumeros);
    printf("Quantidade de números pares: %d\n", numerosPares);
    printf("Quantidade de números ímpares: %d\n", numerosImpares);

    return 0;
}
