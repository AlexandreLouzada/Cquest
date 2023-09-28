#include <stdio.h>

int main() {
    int numero = 1; // Inicializa o número em 1
    int somatorio = 0; // Inicializa o somatório em 0

    // Enquanto o número for menor ou igual a 50, faça:
    while (numero <= 50) {
        somatorio += numero; // Adiciona o número ao somatório
        numero++; // Incrementa o número
    }

    // Exibe o somatório dos números
    printf("O somatório dos números de 1 a 50 é: %d\n", somatorio);

    return 0;
}
