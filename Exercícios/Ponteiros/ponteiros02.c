#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno *aluno1;

    // Alocação dinâmica de memória para a estrutura
    aluno1 = (struct Aluno*)malloc(sizeof(struct Aluno));

    // Preenchimento dos dados do aluno
    strcpy(aluno1->nome, "João Silva");
    aluno1->idade = 20;
    aluno1->nota = 8.5;

    // Exibição dos dados do aluno
    printf("Nome: %s\n", aluno1->nome);
    printf("Idade: %d\n", aluno1->idade);
    printf("Nota: %.2f\n", aluno1->nota);

    // Libera a memória alocada
    free(aluno1);

    return 0;
}
