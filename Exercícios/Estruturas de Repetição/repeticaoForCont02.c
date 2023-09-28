#include <stdio.h>

int main() {
    int somatorio = 0;

    for (int i = 1; i <= 50; i++) {
        somatorio += i;
    }

    printf("O somatório dos números inteiros de 1 até 50 é: %d\n", somatorio);

    return 0;
}
