#include <stdio.h>

int main() {
    int jogador1, jogador2;

    // Solicita a entrada do usuário para as escolhas dos jogadores
    printf("Jogador 1, escolha um objeto (1 - Tesoura, 2 - Pedra, 3 - Papel): ");
    scanf("%d", &jogador1);

    printf("Jogador 2, escolha um objeto (1 - Tesoura, 2 - Pedra, 3 - Papel): ");
    scanf("%d", &jogador2);

    // Verifica o vencedor ou se houve empate
    if (jogador1 == jogador2) {
        printf("Empate! Os jogadores escolheram objetos iguais.\n");
    } else if ((jogador1 == 1 && jogador2 == 3) || (jogador1 == 2 && jogador2 == 1) || (jogador1 == 3 && jogador2 == 2)) {
        printf("Jogador 1 venceu!\n");
    } else {
        printf("Jogador 2 venceu!\n");
    }

    return 0;
}
