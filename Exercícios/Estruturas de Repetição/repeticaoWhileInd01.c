#include <stdio.h>

int main() {
    float preco, total = 0;

    while (preco!=0) {
        printf("Digite o preço do produto (ou digite 0 para encerrar): ");
        scanf("%f", &preco);

        total += preco;
    }

    printf("O somatório dos preços é: %.2f\n", total);

    return 0;
}
