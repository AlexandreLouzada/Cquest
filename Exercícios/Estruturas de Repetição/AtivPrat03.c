#include <stdio.h>

int main() {
    int idade, opiniao, total_opiniao_otimo = 0, total_opiniao_regular = 0, total_espectadores = 0;

    for (int i = 1; i <= 15; i++) {
        printf("Digite a idade do espectador %d: ", i);
        scanf("%d", &idade);
        printf("Digite a opinião do espectador %d (ótimo-3; bom-2; regular-1): ", i);
        scanf("%d", &opiniao);

        if (opiniao == 3) {
            total_opiniao_otimo += idade;
        } else if (opiniao == 1) {
            total_opiniao_regular++;
        }

        total_espectadores++;
    }

    double media_idade_otimo = (double)total_opiniao_otimo / total_espectadores;
    int total_opiniao_bom = total_espectadores - total_opiniao_regular;

    printf("Média das idades das pessoas que responderam ótimo: %.2lf\n", media_idade_otimo);
    printf("Quantidade de pessoas que responderam regular: %d\n", total_opiniao_regular);
    printf("Percentagem de pessoas que responderam bom: %.2lf%%\n", (total_opiniao_bom / (double)total_espectadores) * 100.0);

    return 0;
}
