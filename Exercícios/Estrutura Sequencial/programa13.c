#include <stdio.h>

int main() {
    int qtd_alunos_masculino, qtd_alunos_feminino, qtd_alunos_aprovados;

    // Solicitar os dados do usuário
    printf("Digite a quantidade de alunos do sexo masculino: ");
    scanf("%d", &qtd_alunos_masculino);

    printf("Digite a quantidade de alunos do sexo feminino: ");
    scanf("%d", &qtd_alunos_feminino);

    printf("Digite a quantidade de alunos aprovados: ");
    scanf("%d", &qtd_alunos_aprovados);

    // Calcular os totais e porcentagens
    int total_alunos = qtd_alunos_masculino + qtd_alunos_feminino;
    float porcentagem_masculino = ((float)qtd_alunos_masculino / total_alunos) * 100;
    float porcentagem_feminino = ((float)qtd_alunos_feminino / total_alunos) * 100;
    float porcentagem_reprovados = (((float)total_alunos - qtd_alunos_aprovados) / total_alunos) * 100;

    // Exibir os resultados
    printf("\nResultados:\n");
    printf("Porcentagem de alunos do sexo masculino: %.2f%%\n", porcentagem_masculino);
    printf("Porcentagem de alunos do sexo feminino: %.2f%%\n", porcentagem_feminino);
    printf("Porcentagem de alunos reprovados: %.2f%%\n", porcentagem_reprovados);
    printf("Total de alunos na turma: %d\n", total_alunos);

    return 0;
}
