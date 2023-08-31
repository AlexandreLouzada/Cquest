#include <stdio.h>

int main(void) {
  float salarioBruto, desconto, salarioLiquido;

    // Leitura do salário bruto
    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salarioBruto);

    // Calcula o desconto (8% do salário bruto)
    desconto = salarioBruto * 0.08;

    // Calcula o salário líquido (salário bruto - desconto)
    salarioLiquido = salarioBruto - desconto;

    // Imprime os resultados
    printf("Salário bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto (8%%): R$ %.2f\n", desconto);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);
}
