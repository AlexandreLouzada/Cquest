#include <stdio.h>

#define NUM_MESES 12

int main() {
    // Declarar vetor para armazenar temperaturas médias
    float temperaturas[NUM_MESES];

    // Preencher o vetor com as temperaturas médias
    for (int i = 0; i < NUM_MESES; i++) {
        printf("Digite a temperatura média do mês %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    // Inicializar variáveis para armazenar a maior e a menor temperatura
    float maiorTemperatura = temperaturas[0];
    float menorTemperatura = temperaturas[0];
    int mesMaiorTemperatura = 1;
    int mesMenorTemperatura = 1;

    // Encontrar a maior e a menor temperatura
    for (int i = 1; i < NUM_MESES; i++) {
        if (temperaturas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturas[i];
            mesMaiorTemperatura = i + 1;
        }

        if (temperaturas[i] < menorTemperatura) {
            menorTemperatura = temperaturas[i];
            mesMenorTemperatura = i + 1;
        }
    }

    // Mostrar resultados
    printf("\nMaior temperatura do ano: %.2f°C, no mês %d (", maiorTemperatura, mesMaiorTemperatura);
    if (mesMaiorTemperatura == 1) {
        printf("janeiro");
    } else if (mesMaiorTemperatura == 2) {
        printf("fevereiro");
    } else if (mesMaiorTemperatura == 3) {
        printf("março");
    } else if (mesMaiorTemperatura == 4) {
        printf("abril");
    } else if (mesMaiorTemperatura == 5) {
        printf("maio");
    } else if (mesMaiorTemperatura == 6) {
        printf("junho");
    } else if (mesMaiorTemperatura == 7) {
        printf("julho");
    } else if (mesMaiorTemperatura == 8) {
        printf("agosto");
    } else if (mesMaiorTemperatura == 9) {
        printf("setembro");
    } else if (mesMaiorTemperatura == 10) {
        printf("outubro");
    } else if (mesMaiorTemperatura == 11) {
        printf("novembro");
    } else {
        printf("dezembro");
    }
    printf(")\n");

    printf("Menor temperatura do ano: %.2f°C, no mês %d (", menorTemperatura, mesMenorTemperatura);
    if (mesMenorTemperatura == 1) {
        printf("janeiro");
    } else if (mesMenorTemperatura == 2) {
        printf("fevereiro");
    } else if (mesMenorTemperatura == 3) {
        printf("março");
    } else if (mesMenorTemperatura == 4) {
        printf("abril");
    } else if (mesMenorTemperatura == 5) {
        printf("maio");
    } else if (mesMenorTemperatura == 6) {
        printf("junho");
    } else if (mesMenorTemperatura == 7) {
        printf("julho");
    } else if (mesMenorTemperatura == 8) {
        printf("agosto");
    } else if (mesMenorTemperatura == 9) {
        printf("setembro");
    } else if (mesMenorTemperatura == 10) {
        printf("outubro");
    } else if (mesMenorTemperatura == 11) {
        printf("novembro");
    } else {
        printf("dezembro");
    }
    printf(")\n");

    return 0;
}
