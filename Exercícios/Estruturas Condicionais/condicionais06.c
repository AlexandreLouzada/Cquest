#include <stdio.h>

int main() {
    float saldoMedio, valorCredito;

    // Solicita a entrada do usuário para o saldo médio
    printf("Digite o saldo médio do cliente: ");
    scanf("%f", &saldoMedio);

    // Calcula o valor do crédito com base no saldo médio
    if (saldoMedio >= 0 && saldoMedio <= 200) {
        valorCredito = 0;
    } else if (saldoMedio <= 400) {
        valorCredito = saldoMedio * 0.20;
    } else if (saldoMedio <= 600) {
        valorCredito = saldoMedio * 0.30;
    } else {
        valorCredito = saldoMedio * 0.40;
    }

    // Exibe o saldo médio e o valor do crédito
    printf("Saldo Médio: %.2f\n", saldoMedio);
    printf("Valor do Crédito: R$ %.2f\n", valorCredito);

    return 0;
}
