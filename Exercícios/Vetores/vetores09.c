#include <stdio.h>

#define NUM_AVIOES 12

int main() {
    int numeros[NUM_AVIOES];
    char origens[NUM_AVIOES][50];
    char destinos[NUM_AVIOES][50];
    int lugaresDisponiveis[NUM_AVIOES];

    // Inicializar dados dos voos
    for (int i = 0; i < NUM_AVIOES; i++) {
        numeros[i] = i + 1;
        printf("Digite a origem do voo %d: ", numeros[i]);
        scanf("%s", origens[i]);
        printf("Digite o destino do voo %d: ", numeros[i]);
        scanf("%s", destinos[i]);
        printf("Digite o número de lugares disponíveis para o voo %d: ", numeros[i]);
        scanf("%d", &lugaresDisponiveis[i]);
    }

    int opcao;

    do {
        // Apresentar menu
        printf("\nMENU:\n");
        printf("1. Consultar\n");
        printf("2. Efetuar reserva\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Consultar
                printf("\nConsulta de Voos Disponíveis:\n");
                for (int i = 0; i < NUM_AVIOES; i++) {
                    printf("Voo %d - Origem: %s, Destino: %s, Lugares Disponíveis: %d\n",
                           numeros[i], origens[i], destinos[i], lugaresDisponiveis[i]);
                }
                break;

            case 2: // Efetuar reserva
                printf("\nEfetuar Reserva:\n");
                int numeroVoo;
                printf("Digite o número do voo desejado: ");
                scanf("%d", &numeroVoo);

                int indiceVoo = -1;
                for (int i = 0; i < NUM_AVIOES; i++) {
                    if (numeros[i] == numeroVoo) {
                        indiceVoo = i;
                        break;
                    }
                }

                if (indiceVoo != -1) {
                    if (lugaresDisponiveis[indiceVoo] > 0) {
                        printf("Reserva confirmada! Lugares restantes: %d\n", --lugaresDisponiveis[indiceVoo]);
                    } else {
                        printf("Voo lotado. Não é possível efetuar a reserva.\n");
                    }
                } else {
                    printf("Voo inexistente. Por favor, insira um número de voo válido.\n");
                }
                break;

            case 3: // Sair
                printf("Saindo do programa. Obrigado!\n");
                break;

            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 3);

    return 0;
}
