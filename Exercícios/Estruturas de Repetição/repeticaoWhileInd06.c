#include <stdio.h>

int main() {
    int idade, totalPessoas = 0, idadeMenor18 = 0, idadeMaiorOuIgual18 = 0;

    while (1) {
        printf("Digite a idade da pessoa (ou digite -1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) {
            break; // Encerra o loop se o usuário digitar -1
        }

        if (idade < 18) {
            idadeMenor18++;
        } else {
            idadeMaiorOuIgual18++;
        }

        totalPessoas++;
    }

    if (totalPessoas > 0) {
        float porcentagemMenor18 = (float)(idadeMenor18 * 100) / totalPessoas;
        float porcentagemMaiorOuIgual18 = (float)(idadeMaiorOuIgual18 * 100) / totalPessoas;
        printf("Total de pessoas cadastradas: %d\n", totalPessoas);
        printf("Porcentagem de pessoas com idade inferior a 18 anos: %.2f%%\n", porcentagemMenor18);
        printf("Porcentagem de pessoas com idade igual ou superior a 18 anos: %.2f%%\n", porcentagemMaiorOuIgual18);
    } else {
        printf("Nenhuma idade foi digitada.\n");
    }

    return 0;
}
