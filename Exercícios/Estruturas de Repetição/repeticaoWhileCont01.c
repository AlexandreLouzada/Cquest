#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    float preco, total = 0; // Inicializa o total em 0

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite o preço do produto %d: ", contador);
        scanf("%f", &preco);

        total += preco; // Adiciona o preço ao total

        contador++; // Incrementa o contador
    }

    // Exibe o somatório dos preços
    printf("O somatório dos preços é: R$ %.2f\n", total);

    return 0;
}
