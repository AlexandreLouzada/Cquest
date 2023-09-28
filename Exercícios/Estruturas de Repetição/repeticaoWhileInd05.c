#include <stdio.h>

int main() {
    float altura;
    int totalPessoas = 0, alturaMenor160 = 0, alturaEntre160e180 = 0, alturaMaior180 = 0;

    while (1) {
        printf("Digite a altura da pessoa (ou digite -1 para encerrar): ");
        scanf("%f", &altura);

        if (altura == -1) {
            break; // Encerra o loop se o usuário digitar -1
        }

        if (altura < 1.60) {
            alturaMenor160++;
        } else if (altura >= 1.60 && altura <= 1.80) {
            alturaEntre160e180++;
        } else {
            alturaMaior180++;
        }

        totalPessoas++;
    }

    printf("Total de pessoas cadastradas: %d\n", totalPessoas);
    printf("Pessoas com altura inferior a 1,60 metros: %d\n", alturaMenor160);
    printf("Pessoas com altura entre 1,60 metros e 1,80 metros: %d\n", alturaEntre160e180);
    printf("Pessoas com altura superior a 1,80 metros: %d\n", alturaMaior180);

    return 0;
}
