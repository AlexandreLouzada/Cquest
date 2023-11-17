#include <stdio.h>

#define TOTAL_POLTRONAS 48

// Função para mostrar o mapa de ocupação do ônibus
void mostrarMapa(int janela[], int corredor[]) {
    printf("\nMapa de ocupação do ônibus:\n");

    for (int i = 0; i < TOTAL_POLTRONAS; i++) {
        printf("%d - %s\n", i + 1, janela[i] ? "Ocupada" : "Livre");
        i++; // Pula para a próxima poltrona (corredor)
        printf("%d - %s\n", i + 1, corredor[i] ? "Ocupada" : "Livre");
    }
}

int main() {
    // Inicializar vetores para controle de poltronas
    int janela[TOTAL_POLTRONAS / 2] = {0}; // Inicialmente, todas as poltronas estão livres
    int corredor[TOTAL_POLTRONAS / 2] = {0};

    int opcao;

    do {
        printf("\nOpções:\n");
        printf("1. Vender passagem\n");
        printf("2. Mostrar mapa de ocupação do ônibus\n");
        printf("3. Encerrar\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Vender passagem
                {
                    int tipoPoltrona, numeroPoltrona;

                    printf("\nEscolha o tipo de poltrona (1 para janela, 2 para corredor): ");
                    scanf("%d", &tipoPoltrona);

                    printf("Digite o número da poltrona desejada: ");
                    scanf("%d", &numeroPoltrona);

                    if (numeroPoltrona < 1 || numeroPoltrona > TOTAL_POLTRONAS) {
                        printf("Número de poltrona inválido.\n");
                        break;
                    }

                    int *vetor;
                    if (tipoPoltrona == 1) { // Janela
                        vetor = janela;
                    } else if (tipoPoltrona == 2) { // Corredor
                        vetor = corredor;
                    } else {
                        printf("Tipo de poltrona inválido.\n");
                        break;
                    }

                    int indice = numeroPoltrona - 1; // Ajustar para o índice do vetor
                    if (vetor[indice] == 0) {
                        vetor[indice] = 1; // Marcar como ocupada
                        printf("Venda efetivada.\n");
                    } else {
                        printf("Poltrona ocupada.\n");
                    }
                }
                break;

            case 2: // Mostrar mapa de ocupação do ônibus
                mostrarMapa(janela, corredor);
                break;

            case 3: // Encerrar
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
