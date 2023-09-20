#include <stdio.h>

int main() {
    float salarioBruto, inss, ir, sindicato, salarioLiquido;

    // Solicita a entrada do usuário para o salário bruto
    printf("Digite o salário bruto: ");
    scanf("%f", &salarioBruto);

    // Calcula as contribuições
    inss = salarioBruto * 0.10;    // 10% para o INSS
    ir = salarioBruto * 0.25;      // 25% para o IR
    sindicato = salarioBruto * 0.05; // 0.5% para o sindicato

    // Calcula o salário líquido
    salarioLiquido = salarioBruto - inss - ir - sindicato;

    // Exibe as contribuições e o salário líquido
    printf("Contribuição ao INSS: R$ %.2f\n", inss);
    printf("Imposto de Renda (IR): R$ %.2f\n", ir);
    printf("Contribuição ao Sindicato: R$ %.2f\n", sindicato);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
