#include <stdio.h>

int main() {
    int idade, totalPessoas = 0, idadeMenor18 = 0, idadeMaiorOuIgual18 = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        totalPessoas++;

        if (idade < 18) {
            idadeMenor18++;
        } else {
            idadeMaiorOuIgual18++;
        }
    }

    printf("Total de pessoas cadastradas: %d\n", totalPessoas);
    printf("Porcentagem de pessoas com idade inferior a 18 anos: %.2f%%\n", (float)(idadeMenor18 * 100) / totalPessoas);
    printf("Porcentagem de pessoas com idade igual ou superior a 18 anos: %.2f%%\n", (float)(idadeMaiorOuIgual18 * 100) / totalPessoas);

    return 0;
}
