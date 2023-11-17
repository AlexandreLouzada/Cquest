#include <stdio.h>

#define TAMANHO_VETOR 15
#define TAMANHO_VETOR_P_I 5

int main() {
    // Declarar vetores
    int vetor[TAMANHO_VETOR];
    int vetorP[TAMANHO_VETOR_P_I];
    int vetorI[TAMANHO_VETOR_P_I];

    // Preencher o vetor com quinze valores
    printf("Digite quinze valores:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicializar índices dos vetores P e I
    int indiceP = 0;
    int indiceI = 0;

    // Separar os valores em vetores P e I
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] % 2 == 0) {  // Número par
            if (indiceP == TAMANHO_VETOR_P_I) {
                // Vetor P está cheio, mostrar conteúdo e reiniciar
                printf("Vetor P cheio. Conteúdo: ");
                for (int j = 0; j < TAMANHO_VETOR_P_I; j++) {
                    printf("%d ", vetorP[j]);
                }
                printf("\n");
                indiceP = 0;  // Reiniciar preenchimento na primeira posição
            }
            vetorP[indiceP++] = vetor[i];
        } else {  // Número ímpar
            if (indiceI == TAMANHO_VETOR_P_I) {
                // Vetor I está cheio, mostrar conteúdo e reiniciar
                printf("Vetor I cheio. Conteúdo: ");
                for (int j = 0; j < TAMANHO_VETOR_P_I; j++) {
                    printf("%d ", vetorI[j]);
                }
                printf("\n");
                indiceI = 0;  // Reiniciar preenchimento na primeira posição
            }
            vetorI[indiceI++] = vetor[i];
        }
    }

    // Mostrar o conteúdo restante dos vetores P e I
    printf("\nConteúdo restante do vetor P: ");
    for (int i = 0; i < indiceP; i++) {
        printf("%d ", vetorP[i]);
    }

    printf("\nConteúdo restante do vetor I: ");
    for (int i = 0; i < indiceI; i++) {
        printf("%d ", vetorI[i]);
    }

    return 0;
}
