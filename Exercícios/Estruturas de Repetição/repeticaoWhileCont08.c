#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    float altura, somaAlturas = 0, alturaMaisAlta = 0;

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite a altura da pessoa %d (em metros): ", contador);
        scanf("%f", &altura);

        somaAlturas += altura; // Adiciona a altura à soma das alturas

        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura; // Atualiza a altura mais alta se necessário
        }

        contador++; // Incrementa o contador
    }

    // Calcula a altura média do grupo
    float alturaMedia = somaAlturas / 10;

    // Exibe os resultados
    printf("A altura média do grupo é: %.2f metros\n", alturaMedia);
    printf("A altura da pessoa mais alta é: %.2f metros\n", alturaMaisAlta);

    return 0;
}
