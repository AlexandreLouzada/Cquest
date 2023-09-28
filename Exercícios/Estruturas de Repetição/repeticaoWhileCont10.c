#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    int numero, totalNumeros = 0, numerosPares = 0, numerosImpares = 0;

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite o número %d: ", contador);
        scanf("%d", &numero);

        totalNumeros++; // Incrementa o total de números digitados

        if (numero % 2 == 0) {
            numerosPares++; // Incrementa o total de números pares
        } else {
            numerosImpares++; // Incrementa o total de números ímpares
        }

        contador++; // Incrementa o contador
    }

    // Exibe os resultados
    printf("Quantidade de números digitados: %d\n", totalNumeros);
    printf("Quantidade de números pares: %d\n", numerosPares);
    printf("Quantidade de números ímpares: %d\n", numerosImpares);

    return 0;
}
