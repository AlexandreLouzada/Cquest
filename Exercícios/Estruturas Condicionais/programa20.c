#include <stdio.h>

int main() {
    int numAlunosMasculino, numAlunosFeminino, numAlunosAprovados;
    int totalAlunos;
    float porcentagemMasculino, porcentagemFeminino, porcentagemAprovados;

    // Solicita a entrada do usuário
    printf("Digite a quantidade de alunos do sexo masculino: ");
    scanf("%d", &numAlunosMasculino);

    printf("Digite a quantidade de alunos do sexo feminino: ");
    scanf("%d", &numAlunosFeminino);

    printf("Digite a quantidade de alunos aprovados: ");
    scanf("%d", &numAlunosAprovados);

    // Calcula o total de alunos
    totalAlunos = numAlunosMasculino + numAlunosFeminino;

    // Calcula as porcentagens
    porcentagemMasculino = (float)numAlunosMasculino / totalAlunos * 100;
    porcentagemFeminino = (float)numAlunosFeminino / totalAlunos * 100;
    porcentagemAprovados = (float)numAlunosAprovados / totalAlunos * 100;

    // Exibe os resultados
    printf("Total de Alunos: %d\n", totalAlunos);
    printf("Porcentagem de Alunos do Sexo Masculino: %.2f%%\n", porcentagemMasculino);
    printf("Porcentagem de Alunos do Sexo Feminino: %.2f%%\n", porcentagemFeminino);
    printf("Porcentagem de Alunos Aprovados: %.2f%%\n", porcentagemAprovados);

    return 0;
}
