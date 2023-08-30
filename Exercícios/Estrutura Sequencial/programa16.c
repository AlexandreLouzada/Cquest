#include <stdio.h>

int main() {
    float horas_trabalhadas, valor_hora, salario_semanal;

    // Solicitar os dados do usuário
    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);

    // Calcular o salário semanal
    salario_semanal = horas_trabalhadas * valor_hora;

    // Exibir o resultado
    printf("O salário semanal do trabalhador é: R$ %.2f\n", salario_semanal);

    return 0;
}
