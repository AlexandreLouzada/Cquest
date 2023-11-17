#include <stdio.h>

#define TAMANHO_VETOR 5

int main() {
    // Declarar vetor
    float vetor[TAMANHO_VETOR];

    // Preencher o vetor com números reais
    printf("Digite cinco números reais para o vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%f", &vetor[i]);
    }

    // Exibir opções e receber código inteiro
    int codigo;
    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Mostrar o vetor na ordem direta\n");
        printf("2 - Mostrar o vetor na ordem inversa\n");
        printf("0 - Finalizar o programa\n");
        scanf("%d", &codigo);

        // Executar a opção escolhida
        switch (codigo) {
            case 1:
                printf("Vetor na ordem direta:\n");
                for (int i = 0; i < TAMANHO_VETOR; i++) {
                    printf("%.2f ", vetor[i]);
                }
                break;
            case 2:
                printf("Vetor na ordem inversa:\n");
                for (int i = TAMANHO_VETOR - 1; i >= 0; i--) {
                    printf("%.2f ", vetor[i]);
                }
                break;
            case 0:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (codigo != 0);

    return 0;
}
