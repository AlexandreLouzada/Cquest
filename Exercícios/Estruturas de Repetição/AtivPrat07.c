#include <stdio.h>

int main() {
    int idade, peso;
    double altura;
    int cor_olhos, cor_cabelos;
    int count_50anos_60kg = 0;
    int count_altura_150 = 0;
    int count_olhos_azuis = 0;
    int count_ruivas_sem_olhos_azuis = 0;

    for (int i = 1; i <= 6; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Digite o peso (em kg) da pessoa %d: ", i);
        scanf("%d", &peso);
        printf("Digite a altura (em metros) da pessoa %d: ", i);
        scanf("%lf", &altura);
        printf("Digite a cor dos olhos (1-azul; 2-preto; 3-verde; 4-castanho) da pessoa %d: ", i);
        scanf("%d", &cor_olhos);
        printf("Digite a cor dos cabelos (5-preto; 6-castanho; 7-louro; 8-ruivo) da pessoa %d: ", i);
        scanf("%d", &cor_cabelos);

        if (idade > 50 && peso < 60) {
            count_50anos_60kg++;
        }

        if (altura < 1.50) {
            count_altura_150++;
        }

        if (cor_olhos == 1) {
            count_olhos_azuis++;
        }

        if (cor_cabelos == 8 && cor_olhos != 1) {
            count_ruivas_sem_olhos_azuis++;
        }
    }

    printf("Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n", count_50anos_60kg);

    if (count_altura_150 > 0) {
        printf("Média das idades das pessoas com altura inferior a 1.50 m: %.2lf\n", 50.0 / count_altura_150);
    }

    if (count_olhos_azuis > 0) {
        double percentagem_olhos_azuis = (count_olhos_azuis / 6.0) * 100.0;
        printf("Porcentagem de pessoas com olhos azuis: %.2lf%%\n", percentagem_olhos_azuis);
    }

    printf("Quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n", count_ruivas_sem_olhos_azuis);

    return 0;
}
