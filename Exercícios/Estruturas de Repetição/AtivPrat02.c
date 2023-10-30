#include <stdio.h>

int main() {
    int idade, faixa_etaria;
    double peso;
    double media_1_10 = 0.0, media_11_20 = 0.0, media_21_30 = 0.0, media_31 = 0.0;
    int count_1_10 = 0, count_11_20 = 0, count_21_30 = 0, count_31 = 0;

    for (int i = 1; i <= 15; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Digite o peso da pessoa %d: ", i);
        scanf("%lf", &peso);

        if (idade >= 1 && idade <= 10) {
            media_1_10 += peso;
            count_1_10++;
        } else if (idade >= 11 && idade <= 20) {
            media_11_20 += peso;
            count_11_20++;
        } else if (idade >= 21 && idade <= 30) {
            media_21_30 += peso;
            count_21_30++;
        } else {
            media_31 += peso;
            count_31++;
        }
    }

    if (count_1_10 > 0) {
        media_1_10 /= count_1_10;
        printf("Média de pesos para a faixa etária 1 a 10 anos: %.2lf\n", media_1_10);
    }
    if (count_11_20 > 0) {
        media_11_20 /= count_11_20;
        printf("Média de pesos para a faixa etária 11 a 20 anos: %.2lf\n", media_11_20);
    }
    if (count_21_30 > 0) {
        media_21_30 /= count_21_30;
        printf("Média de pesos para a faixa etária 21 a 30 anos: %.2lf\n", media_21_30);
    }
    if (count_31 > 0) {
        media_31 /= count_31;
        printf("Média de pesos para a faixa etária 31 anos ou mais: %.2lf\n", media_31);
    }

    return 0;
}

