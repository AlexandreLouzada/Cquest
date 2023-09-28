#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    int totalPessoas = 0, alturaMenor160 = 0, alturaEntre160e180 = 0, alturaMaior180 = 0;
    float altura;

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite a altura da pessoa %d (em metros): ", contador);
        scanf("%f", &altura);

        if (altura < 1.60) {
            alturaMenor160++; // Incrementa o total de pessoas com altura menor que 1,60 metros
        } else if (altura >= 1.60 && altura <= 1.80) {
            alturaEntre160e180++; // Incrementa o total de pessoas com altura entre 1,60 e 1,80 metros
        } else {
            alturaMaior180++; // Incrementa o total de pessoas com altura maior que 1,80 metros
        }

        totalPessoas++; // Incrementa o total de pessoas cadastradas
        contador++; // Incrementa o contador
    }

    // Exibe os resultados
    printf("Total de pessoas cadastradas: %d\n", totalPessoas);
    printf("Pessoas com altura inferior a 1,60 metros: %d\n", alturaMenor160);
    printf("Pessoas com altura entre 1,60 metros e 1,80 metros: %d\n", alturaEntre160e180);
    printf("Pessoas com altura superior a 1,80 metros: %d\n", alturaMaior180);

    return 0;
}
