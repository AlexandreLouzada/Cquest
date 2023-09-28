#include <stdio.h>

int main() {
    int numero, maior = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &numero);

        if (i == 1 || numero > maior) {
            maior = numero;
        }
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
