#include <stdio.h>

int main() {
    int sexo, totalMasculino = 0, totalFeminino = 0;

    while (1) {
        printf("Digite o sexo da pessoa (1 para masculino, 2 para feminino, ou 0 para encerrar): ");
        scanf("%d", &sexo);

        if (sexo == 0) {
            break; // Encerra o loop se o usuário digitar 0
        }

        if (sexo == 1) {
            totalMasculino++;
        } else if (sexo == 2) {
            totalFeminino++;
        } else {
            printf("Opção inválida. Use 1 para masculino, 2 para feminino, ou 0 para encerrar.\n");
        }
    }

    int totalPessoas = totalMasculino + totalFeminino;

    printf("Total de pessoas cadastradas: %d\n", totalPessoas);
    printf("Total de pessoas do sexo masculino: %d\n", totalMasculino);
    printf("Total de pessoas do sexo feminino: %d\n", totalFeminino);

    return 0;
}
