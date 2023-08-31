#include <stdio.h>

int main(void) {
    int quantidade_mini_games, quantidade_calculadoras, quantidade_canetas;
    float preco_mini_game = 6.95, preco_calculadora = 3.50, preco_caneta = 1.20;
    float faturamento_mini_games, faturamento_calculadoras, faturamento_canetas, faturamento_total;

    // Solicita a quantidade de mini-games vendidos
    printf("Digite a quantidade de mini-games vendidos: ");
    scanf("%d", &quantidade_mini_games);

    // Solicita a quantidade de calculadoras vendidas
    printf("Digite a quantidade de calculadoras vendidas: ");
    scanf("%d", &quantidade_calculadoras);

    // Solicita a quantidade de canetas vendidas
    printf("Digite a quantidade de canetas vendidas: ");
    scanf("%d", &quantidade_canetas);

    // Calcula o faturamento para cada produto
    faturamento_mini_games = quantidade_mini_games * preco_mini_game;
    faturamento_calculadoras = quantidade_calculadoras * preco_calculadora;
    faturamento_canetas = quantidade_canetas * preco_caneta;

    // Calcula o faturamento total
    faturamento_total = faturamento_mini_games + faturamento_calculadoras + faturamento_canetas;

    // Imprime os faturamentos
    printf("Faturamento de mini-games: R$ %.2f\n", faturamento_mini_games);
    printf("Faturamento de calculadoras: R$ %.2f\n", faturamento_calculadoras);
    printf("Faturamento de canetas: R$ %.2f\n", faturamento_canetas);
    printf("Faturamento total: R$ %.2f\n", faturamento_total);

    return 0;
}
