#include <stdio.h>

int main() {
    float altura, somaAlturas = 0, alturaMaisAlta = 0;
    int totalPessoas = 0;

    while (1) {
        printf("Digite a altura da pessoa (ou digite -1 para encerrar): ");
        scanf("%f", &altura);

        if (altura == -1) {
            break; // Encerra o loop se o usuário digitar -1
        }

        somaAlturas += altura;

        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
        }

        totalPessoas++;
    }

    if (totalPessoas > 0) {
        float alturaMedia = somaAlturas / totalPessoas;
        printf("A altura média do grupo é: %.2f metros\n", alturaMedia);
        printf("A altura da pessoa mais alta é: %.2f metros\n", alturaMaisAlta);
    } else {
        printf("Nenhuma altura foi digitada.\n");
    }

    return 0;
}
