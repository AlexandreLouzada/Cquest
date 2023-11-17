#include <stdio.h>

#define NUM_FUNCIONARIOS 5
#define AUMENTO_AMBAS_COND 0.35  // 35%
#define AUMENTO_TEMPO_SERV 0.25  // 25%
#define AUMENTO_SALARIO 0.15     // 15%

int main() {
    // Declarar vetores para armazenar nomes, salários e tempo de serviço
    char nomes[NUM_FUNCIONARIOS][50];
    float salarios[NUM_FUNCIONARIOS];
    int tempoServico[NUM_FUNCIONARIOS];

    // Preencher os vetores com nomes, salários e tempo de serviço
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o salário do funcionário %d: R$", i + 1);
        scanf("%f", &salarios[i]);
        printf("Digite o tempo de serviço do funcionário %d (em anos): ", i + 1);
        scanf("%d", &tempoServico[i]);
    }

    // Relatório 1: Funcionários sem aumento
    printf("\nRelatório 1: Funcionários sem aumento:\n");
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        if (!(tempoServico[i] > 5 || salarios[i] < 800.00)) {
            printf("%s\n", nomes[i]);
        }
    }

    // Relatório 2: Funcionários com aumento e novos salários
    printf("\nRelatório 2: Funcionários com aumento e novos salários:\n");
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        if (tempoServico[i] > 5 && salarios[i] < 800.00) {
            float aumento;
            if (tempoServico[i] > 5 && salarios[i] < 800.00) {
                aumento = salarios[i] * AUMENTO_AMBAS_COND;
            } else if (tempoServico[i] > 5) {
                aumento = salarios[i] * AUMENTO_TEMPO_SERV;
            } else {
                aumento = salarios[i] * AUMENTO_SALARIO;
            }

            float novoSalario = salarios[i] + aumento;
            printf("%s - Novo Salário: R$ %.2f\n", nomes[i], novoSalario);
        }
    }

    return 0;
}
