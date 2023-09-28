#include <stdio.h>

int main() {
    int sexo, totalMasculino = 0, totalFeminino = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o sexo da pessoa %d (1 para masculino, 2 para feminino): ", i);
        scanf("%d", &sexo);

        if (sexo == 1) {
            totalMasculino++;
        } else if (sexo == 2) {
            totalFeminino++;
        }
    }

    printf("Total de pessoas cadastradas: 10\n");
    printf("Total de pessoas do sexo masculino: %d\n", totalMasculino);
    printf("Total de pessoas do sexo feminino: %d\n", totalFeminino);

    return 0;
}
