#include <stdio.h>

int main() {
    int valores[5];  // Declaração do vetor para armazenar os 5 valores inteiros
    int soma = 0;    // Variável para armazenar a soma dos valores

    // Leitura dos 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];  // Adiciona o valor atual à soma
    }

    // Impressão da soma dos valores
    printf("A soma dos valores é: %d\n", soma);

    return 0;
}
