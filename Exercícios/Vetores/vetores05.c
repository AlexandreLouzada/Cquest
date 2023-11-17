#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetorX[TAMANHO];
    int vetorY[TAMANHO];
    int vetorUniao[TAMANHO * 2];  // Supondo o caso em que todos os elementos de x e y são distintos
    int vetorDiferenca[TAMANHO];
    int vetorSoma[TAMANHO];
    int vetorProduto[TAMANHO];
    int vetorIntersecao[TAMANHO];

    // Preencher o vetor X
    printf("Digite os elementos do vetor X:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorX[i]);
    }

    // Preencher o vetor Y
    printf("\nDigite os elementos do vetor Y:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorY[i]);
    }

    // União
    int tamanhoUniao = 0;
    for (int i = 0; i < TAMANHO; i++) {
        int elementoAtual = vetorX[i];
        int encontrado = 0;

        for (int j = 0; j < tamanhoUniao; j++) {
            if (vetorUniao[j] == elementoAtual) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            vetorUniao[tamanhoUniao++] = elementoAtual;
        }
    }

    for (int i = 0; i < TAMANHO; i++) {
        int elementoAtual = vetorY[i];
        int encontrado = 0;

        for (int j = 0; j < tamanhoUniao; j++) {
            if (vetorUniao[j] == elementoAtual) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            vetorUniao[tamanhoUniao++] = elementoAtual;
        }
    }

    // Diferença
    int tamanhoDiferenca = 0;
    for (int i = 0; i < TAMANHO; i++) {
        int elementoAtual = vetorX[i];
        int encontrado = 0;

        for (int j = 0; j < TAMANHO; j++) {
            if (vetorY[j] == elementoAtual) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            vetorDiferenca[tamanhoDiferenca++] = elementoAtual;
        }
    }

    // Soma
    for (int i = 0; i < TAMANHO; i++) {
        vetorSoma[i] = vetorX[i] + vetorY[i];
    }

    // Produto
    for (int i = 0; i < TAMANHO; i++) {
        vetorProduto[i] = vetorX[i] * vetorY[i];
    }

    // Interseção
    int tamanhoIntersecao = 0;
    for (int i = 0; i < TAMANHO; i++) {
        int elementoAtual = vetorX[i];
        int encontradoX = 0;
        int encontradoY = 0;

        for (int j = 0; j < TAMANHO; j++) {
            if (vetorX[j] == elementoAtual) {
                encontradoX = 1;
            }

            if (vetorY[j] == elementoAtual) {
                encontradoY = 1;
            }
        }

        if (encontradoX && encontradoY) {
            vetorIntersecao[tamanhoIntersecao++] = elementoAtual;
        }
    }

    // Exibir resultados
    printf("\nVetor Resultante da União de X com Y:\n");
    for (int i = 0; i < tamanhoUniao; i++) {
        printf("%d ", vetorUniao[i]);
    }

    printf("\n\nVetor Resultante da Diferença (X - Y):\n");
    for (int i = 0; i < tamanhoDiferenca; i++) {
        printf("%d ", vetorDiferenca[i]);
    }

    printf("\n\nVetor Resultante da Soma de X e Y:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetorSoma[i]);
    }

    printf("\n\nVetor Resultante do Produto de X e Y:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetorProduto[i]);
    }

    printf("\n\nVetor Resultante da Interseção entre X e Y:\n");
    for (int i = 0; i < tamanhoIntersecao; i++) {
        printf("%d ", vetorIntersecao[i]);
    }

    printf("\n");

    return 0;
}
