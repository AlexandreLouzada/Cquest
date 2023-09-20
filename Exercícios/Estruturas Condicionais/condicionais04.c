#include <stdio.h>

int main() {
    int codigoItem, quantidade;
    float valorTotal = 0.0;

    // Exibe o cardápio
    printf("Cardapio:\n");
    printf("100 - Cachorro Quente - R$ 5,20\n");
    printf("101 - Hamburguer - R$ 5,80\n");
    printf("102 - Cheeseburguer - R$ 7,30\n");
    printf("103 - Refrigerante - R$ 5,00\n");

    // Solicita a entrada do usuário
    printf("Digite o código do item pedido: ");
    scanf("%d", &codigoItem);

    // Solicita a quantidade
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Calcula o valor total com base no código do item
    if (codigoItem == 100) {
        valorTotal = quantidade * 5.20;
    } else if (codigoItem == 101) {
        valorTotal = quantidade * 5.80;
    } else if (codigoItem == 102) {
        valorTotal = quantidade * 7.30;
    } else if (codigoItem == 103) {
        valorTotal = quantidade * 5.00;
    } else {
        printf("Código de item inválido\n");
        return 1; // Sai do programa com código de erro
    }

    // Exibe o valor total a ser pago
    printf("Valor a ser pago: R$ %.2f\n", valorTotal);

    return 0;
}
