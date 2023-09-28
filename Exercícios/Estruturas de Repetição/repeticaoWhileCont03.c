#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    int idade, somaIdades = 0; // Inicializa a soma das idades em 0

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite a idade da pessoa %d: ", contador);
        scanf("%d", &idade);

        somaIdades += idade; // Adiciona a idade à soma das idades

        contador++; // Incrementa o contador
    }

    // Calcula a média das idades
    float mediaIdades = (float)somaIdades / 10;

    // Exibe a média das idades
    printf("A média das idades é: %.2f\n", mediaIdades);

    return 0;
}
