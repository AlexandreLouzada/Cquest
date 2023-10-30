#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++) {
        printf("%dx%d=%d\n", numero, i, numero * i);
    }

    return 0;
}
