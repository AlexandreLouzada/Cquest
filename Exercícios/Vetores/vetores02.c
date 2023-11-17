#include <stdio.h>

#define TAMANHO 10

int main() {
    float precos[TAMANHO];
    int quantidades[TAMANHO];
    float totalVendas = 0;
    float salarioFixo = 745.00;
    float comissao;
    float maiorVenda = 0;
    int posicaoMaiorVenda;

    // Preencher os vetores de preços e quantidades
    printf("Digite os preços dos objetos:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Objeto %d: R$ ", i + 1);
        scanf("%f", &precos[i]);

        printf("Digite a quantidade vendida do objeto %d: ", i + 1);
        scanf("%d", &quantidades[i]);

        // Calcular o total de vendas e verificar o objeto mais vendido
        totalVendas += precos[i] * quantidades[i];
        if (quantidades[i] > maiorVenda) {
            maiorVenda = quantidades[i];
            posicaoMaiorVenda = i;
        }
    }

    // Exibir relatório
    printf("\nRelatório de Vendas:\n");
    printf("Objeto\tQuantidade\tValor Unitário\tValor Total\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t%d\t\tR$ %.2f\t\tR$ %.2f\n", i + 1, quantidades[i], precos[i], precos[i] * quantidades[i]);
    }

    // Exibir valores gerais
    printf("\nValor Geral das Vendas: R$ %.2f\n", totalVendas);

    // Calcular e exibir comissão do vendedor
    comissao = 0.05 * totalVendas;
    printf("Comissão do Vendedor: R$ %.2f\n", comissao);

    // Exibir objeto mais vendido
    printf("Objeto mais vendido: Objeto %d, Quantidade: %d\n", posicaoMaiorVenda + 1, quantidades[posicaoMaiorVenda]);

    return 0;
}
