#include <stdio.h>

int ehImpar(int n) {
    return n % 2 != 0;
}

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (ehImpar(numero)) {
        printf("%d é ímpar.\n", numero);
    } else {
        printf("%d é par.\n", numero);
    }
    
    return 0;
}
