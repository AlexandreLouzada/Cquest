#include <stdio.h>

/*
Crie um programa para ler a matrícula e o salário de dois empregados. Descontar 5% no salário do primeiro e acrescentar 9% no salário do segundo. Informar: o
valor do desconto do primeiro; o valor do acréscimo do segundo; o salário final do primeiro; o salário final do segundo.
*/

int main(void) {
  int matricula1, matricula2;
  float salarioInicial1, salarioInicial2;
  float acrescimo,desconto, salarioFinal1, salarioFinal2;

    // Leitura dos dados do funcionário 1
    printf("Digite a matricula do funcionário1: ");
    scanf("%d", &matricula1);
    printf("Digite o salario inicial do funcionário1: ");
    scanf("%f", &salarioInicial1);

    // Leitura dos dados do funcionário 2
    printf("Digite a matricula do funcionário2: ");
    scanf("%d", &matricula2);
    printf("Digite o salario inicial do funcionário2: ");
    scanf("%f", &salarioInicial2);
  
    // Calculo dos salários
    desconto = salarioInicial1 * 0.05;
    acrescimo = salarioInicial2 * 0.09;
    salarioFinal1 = salarioInicial1 - desconto;
    salarioFinal2 = salarioInicial2 + acrescimo;

    // Imprime os resultados
    printf("Empregado 1, matricula: %d\n",matricula1);
    printf("Desconto (5%%): R$ %.2f\n", desconto);
    printf("Salário Final: R$ %.2f\n", salarioFinal1);
    
    printf("\nEmpregado 2, matricula: %d\n",matricula2);
    printf("Acrescimo (9%%): R$ %.2f\n", acrescimo);
    printf("Salário Final: R$ %.2f\n", salarioFinal2);

}
