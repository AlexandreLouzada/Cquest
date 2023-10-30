#include <stdio.h>

int main() {
    int resposta, sexo, sim = 0, nao = 0, mulheres_sim = 0, homens = 0, homens_nao = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o sexo da pessoa %d (1-feminino; 2-masculino): ", i);
        scanf("%d", &sexo);
        printf("Digite a resposta da pessoa %d (1-sim; 2-não): ", i);
        scanf("%d", &resposta);

        if (resposta == 1) {
            sim++;
        } else if (resposta == 2) {
            nao++;
        }

        if (sexo == 1 && resposta == 1) {
            mulheres_sim++;
        }

        if (sexo == 2) {
            homens++;
            if (resposta == 2) {
                homens_nao++;
            }
        }
    }

    printf("Número de pessoas que responderam sim: %d\n", sim);
    printf("Número de pessoas que responderam não: %d\n", nao);
    printf("Número de mulheres que responderam sim: %d\n", mulheres_sim);
    
    if (homens > 0) {
        double percentagem_homens_nao = (homens_nao / (double)homens) * 100.0;
        printf("Percentagem de homens que responderam não: %.2lf%%\n", percentagem_homens_nao);
    }

    return 0;
}
