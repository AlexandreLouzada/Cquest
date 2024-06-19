#include <stdio.h>

int main() {
    float precos[5];   // Declaração do array para armazenar os preços dos produtos
    float soma = 0;    // Variável para armazenar a soma dos preços
    float media;       // Variável para armazenar a média dos preços

    // Leitura dos preços dos 5 produtos
    printf("Digite os preços de 5 produtos:\n");
    for(int i = 0; i < 5; i++) {
        printf("Preço do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
        soma += precos[i];  // Soma dos preços
    }

    // Cálculo da média dos preços
    media = soma / 5;

    // Impressão da soma e da média dos preços
    printf("Soma dos preços: %.2f\n", soma);
    printf("Média dos preços: %.2f\n", media);

    return 0;
}
