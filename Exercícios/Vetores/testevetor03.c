#include <stdio.h>

int main() {
    int numero;          // Variável para armazenar o número lido
    int count_positivos = 0;  // Variável para contar os números positivos
    int count_negativos = 0;  // Variável para contar os números negativos
    int count_maior_zero = 0; // Variável para contar os números maiores que zero

    printf("Digite números inteiros (digite 0 para parar):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;  // Se o número for zero, interrompe o loop
        }

        if (numero > 0) {
            count_positivos++;  // Incrementa o contador de positivos
            count_maior_zero++; // Incrementa o contador de maiores que zero
        } else if (numero < 0) {
            count_negativos++;  // Incrementa o contador de negativos
        }
    }

    // Impressão dos resultados
    printf("Quantidade de valores positivos: %d\n", count_positivos);
    printf("Quantidade de valores negativos: %d\n", count_negativos);
    printf("Quantidade de valores maiores que zero: %d\n", count_maior_zero);

    return 0;
}
