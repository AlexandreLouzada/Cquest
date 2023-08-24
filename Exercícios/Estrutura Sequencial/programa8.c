#include <stdio.h>

int main(void) {
    int alunos_masculino, alunos_feminino, alunos_aprovados;
    float total_alunos, porcentagem_masculino, porcentagem_feminino, porcentagem_aprovados;

    // Solicita a quantidade de alunos do sexo masculino
    printf("Digite a quantidade de alunos do sexo masculino: ");
    scanf("%d", &alunos_masculino);

    // Solicita a quantidade de alunos do sexo feminino
    printf("Digite a quantidade de alunos do sexo feminino: ");
    scanf("%d", &alunos_feminino);

    // Solicita a quantidade de alunos aprovados
    printf("Digite a quantidade de alunos aprovados: ");
    scanf("%d", &alunos_aprovados);

    // Calcula o total de alunos
    total_alunos = alunos_masculino + alunos_feminino;

    // Calcula as porcentagens
    porcentagem_masculino = (alunos_masculino / total_alunos) * 100;
    porcentagem_feminino = (alunos_feminino / total_alunos) * 100;
    porcentagem_aprovados = (alunos_aprovados / total_alunos) * 100;

    // Imprime os resultados
    printf("Total de alunos: %.0f\n", total_alunos);
    printf("Porcentagem de alunos do sexo masculino: %.2f%%\n", porcentagem_masculino);
    printf("Porcentagem de alunos do sexo feminino: %.2f%%\n", porcentagem_feminino);
    printf("Porcentagem de alunos aprovados: %.2f%%\n", porcentagem_aprovados);

    return 0;
}
