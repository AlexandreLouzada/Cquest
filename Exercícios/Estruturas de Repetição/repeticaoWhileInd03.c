#include <stdio.h>

int main() {
    int idade, somaIdades = 0, totalPessoas = 0;

    while (1) {
        printf("Digite a idade da pessoa (ou digite -1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) {
            break; // Encerra o loop se o usuário digitar -1
        }

        somaIdades += idade;
        totalPessoas++;
    }

    if (totalPessoas > 0) {
        float mediaIdades = (float)somaIdades / totalPessoas;
        printf("A média das idades é: %.2f\n", mediaIdades);
    } else {
        printf("Nenhuma idade foi digitada.\n");
    }

    return 0;
}
