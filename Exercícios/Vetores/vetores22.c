#include <stdio.h>

#define MAX_CONTAS 10

int main() {
    // Declarar vetores para códigos e saldos
    int codigos[MAX_CONTAS];
    float saldos[MAX_CONTAS];

    // Inicializar vetores com valores padrão
    for (int i = 0; i < MAX_CONTAS; i++) {
        codigos[i] = -1;  // Inicializar códigos com -1, indicando que a conta não está cadastrada
        saldos[i] = 0.0;  // Inicializar saldos com 0.0
    }

    // Menu principal
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Efetuar depósito\n");
        printf("2. Efetuar saque\n");
        printf("3. Consultar ativo bancário\n");
        printf("4. Finalizar o programa\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Efetuar depósito
                {
                    int codigo;
                    float valor;
                    printf("Digite o código da conta: ");
                    scanf("%d", &codigo);

                    // Buscar a posição da conta no vetor de códigos
                    int posicao = -1;
                    for (int i = 0; i < MAX_CONTAS; i++) {
                        if (codigos[i] == codigo) {
                            posicao = i;
                            break;
                        }
                    }

                    if (posicao == -1) {
                        printf("Conta não encontrada.\n");
                    } else {
                        printf("Digite o valor a ser depositado: ");
                        scanf("%f", &valor);
                        saldos[posicao] += valor;
                        printf("Depósito efetuado com sucesso. Novo saldo: %.2f\n", saldos[posicao]);
                    }
                }
                break;

            case 2: // Efetuar saque
                {
                    int codigo;
                    float valor;
                    printf("Digite o código da conta: ");
                    scanf("%d", &codigo);

                    // Buscar a posição da conta no vetor de códigos
                    int posicao = -1;
                    for (int i = 0; i < MAX_CONTAS; i++) {
                        if (codigos[i] == codigo) {
                            posicao = i;
                            break;
                        }
                    }

                    if (posicao == -1) {
                        printf("Conta não encontrada.\n");
                    } else {
                        printf("Digite o valor a ser sacado: ");
                        scanf("%f", &valor);

                        if (saldos[posicao] >= valor) {
                            saldos[posicao] -= valor;
                            printf("Saque efetuado com sucesso. Novo saldo: %.2f\n", saldos[posicao]);
                        } else {
                            printf("Saldo insuficiente.\n");
                        }
                    }
                }
                break;

            case 3: // Consultar ativo bancário
                {
                    float ativoBancario = 0.0;
                    for (int i = 0; i < MAX_CONTAS; i++) {
                        if (codigos[i] != -1) {  // Verificar se a conta está cadastrada
                            ativoBancario += saldos[i];
                        }
                    }
                    printf("Ativo bancário: %.2f\n", ativoBancario);
                }
                break;

            case 4: // Finalizar o programa
                printf("Programa finalizado.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
