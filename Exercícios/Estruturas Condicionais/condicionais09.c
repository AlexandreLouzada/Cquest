#include <stdio.h>

int main() {
    float salario, gratificacao, salarioLiquido;

    // Solicita a entrada do usuário para o salário
    printf("Digite o salário do empregado: ");
    scanf("%f", &salario);

    // Calcula a gratificação com base na faixa salarial
    if (salario < 2000) {
        gratificacao = salario * 0.05; // 5%
    } else if (salario >= 2000 && salario <= 2500) {
        gratificacao = salario * 0.10; // 10%
    } else if (salario > 2500 && salario <= 3000) {
        gratificacao = salario * 0.15; // 15%
    } else {
        gratificacao = salario * 0.20; // 20%
    }

    // Calcula o salário líquido
    salarioLiquido = salario + gratificacao;

    // Exibe a gratificação e o salário líquido
    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
