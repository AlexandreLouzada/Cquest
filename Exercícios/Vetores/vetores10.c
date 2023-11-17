#include <stdio.h>

#define NUM_QUESTOES 8
#define NUM_ALUNOS 10
#define NOTA_MINIMA 6

int main() {
    // Definir o gabarito da prova
    char gabarito[NUM_QUESTOES];
    printf("Digite o gabarito da prova (respostas corretas, sem espaços): ");
    for (int i = 0; i < NUM_QUESTOES; i++) {
        scanf(" %c", &gabarito[i]);
    }

    // Inicializar dados dos alunos e respostas
    char respostas[NUM_ALUNOS][NUM_QUESTOES];
    int numerosAlunos[NUM_ALUNOS];
    float notas[NUM_ALUNOS];

    // Preencher respostas dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        numerosAlunos[i] = i + 1;
        printf("Digite as respostas do aluno %d (sem espaços): ", numerosAlunos[i]);
        for (int j = 0; j < NUM_QUESTOES; j++) {
            scanf(" %c", &respostas[i][j]);
        }
    }

    // Corrigir provas e calcular notas
    for (int i = 0; i < NUM_ALUNOS; i++) {
        notas[i] = 0;

        for (int j = 0; j < NUM_QUESTOES; j++) {
            if (respostas[i][j] == gabarito[j]) {
                notas[i]++;
            }
        }
    }

    // Mostrar número e nota de cada aluno
    printf("\nResultados dos Alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d - Nota: %.2f\n", numerosAlunos[i], notas[i]);
    }

    // Calcular e mostrar a porcentagem de aprovação
    int aprovados = 0;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (notas[i] >= NOTA_MINIMA) {
            aprovados++;
        }
    }

    float porcentagemAprovacao = (float)aprovados / NUM_ALUNOS * 100;
    printf("\nPorcentagem de Aprovação: %.2f%%\n", porcentagemAprovacao);

    return 0;
}
