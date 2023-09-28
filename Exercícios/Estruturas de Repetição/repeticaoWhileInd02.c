#include <stdio.h>

int main() {
    int somatorio = 0, numero;

    while (numero!=0) {
        printf("Digite um número (ou digite 0 para encerrar): ");
        scanf("%d", &numero);

        somatorio += numero;
    }

    printf("O somatório dos números é: %d\n", somatorio);

    return 0;
}
