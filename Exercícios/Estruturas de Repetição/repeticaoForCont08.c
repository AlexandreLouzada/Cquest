#include <stdio.h>

int main() {
    float altura, somaAlturas = 0, alturaMaisAlta = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i);
        scanf("%f", &altura);

        somaAlturas += altura;

        if (altura > alturaMaisAlta || i == 1) {
            alturaMaisAlta = altura;
        }
    }

    float alturaMedia = somaAlturas / 10;

    printf("Altura média do grupo: %.2f metros\n", alturaMedia);
    printf("Altura da pessoa mais alta: %.2f metros\n", alturaMaisAlta);

    return 0;
}
