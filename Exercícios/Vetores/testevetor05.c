#include <stdio.h>

int main() {
    int valores[5];  // Declaração do vetor para armazenar os 5 valores inteiros
    int soma = 0;    // Variável para armazenar a soma dos valores
    float media;     // Variável para armazenar a média dos valores

    // Leitura dos 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];  // Adiciona o valor atual à soma
    }

    // Cálculo da média dos valores
    media = soma / 5.0;

    // Impressão da soma e da média dos valores
    printf("A soma dos valores é: %d\n", soma);
    printf("A média dos valores é: %.2f\n", media);

    // Impressão dos valores maiores e menores que a média
    printf("Valores maiores que a média:\n");
    for(int i = 0; i < 5; i++) {
        if(valores[i] > media) {
            printf("%d ", valores[i]);
        }
    }
    printf("\n");

    printf("Valores menores que a média:\n");
    for(int i = 0; i < 5; i++) {
        if(valores[i] < media) {
            printf("%d ", valores[i]);
        }
    }
    printf("\n");

    return 0;
}
