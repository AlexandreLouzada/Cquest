#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    int totalPessoas = 0, idadeMenor18 = 0, idadeMaiorOuIgual18 = 0, idade;

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite a idade da pessoa %d: ", contador);
        scanf("%d", &idade);

        if (idade < 18) {
            idadeMenor18++; // Incrementa o total de pessoas com idade menor que 18 anos
        } else {
            idadeMaiorOuIgual18++; // Incrementa o total de pessoas com idade igual ou superior a 18 anos
        }

        totalPessoas++; // Incrementa o total de pessoas cadastradas
        contador++; // Incrementa o contador
    }

    // Calcula as porcentagens
    float porcentagemMenor18 = (float)(idadeMenor18 * 100) / totalPessoas;
    float porcentagemMaiorOuIgual18 = (float)(idadeMaiorOuIgual18 * 100) / totalPessoas;

    // Exibe os resultados
    printf("Total de pessoas cadastradas: %d\n", totalPessoas);
    printf("Porcentagem de pessoas com idade inferior a 18 anos: %.2f%%\n", porcentagemMenor18);
    printf("Porcentagem de pessoas com idade igual ou superior a 18 anos: %.2f%%\n", porcentagemMaiorOuIgual18);

    return 0;
}
