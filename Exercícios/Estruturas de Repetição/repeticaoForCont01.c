#include <stdio.h>

int main() {
    float preco, total = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o preço do produto %d: ", i);
        scanf("%f", &preco);
        total += preco;
    }

    printf("O somatório dos preços é: %.2f\n", total);

    return 0;
}
