#include <stdio.h>

int main() {
    int numero, maior = 0;

    while (1) {
        printf("Digite um número (ou digite 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra o loop se o usuário digitar 0
        }

        if (numero > maior) {
            maior = numero;
        }
    }

    if (maior != 0) {
        printf("O maior número é: %d\n", maior);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}
