#include <stdio.h>

int main() {
    int total_games, total_calculadoras, total_canetas;
    float preco_game, preco_calculadora, preco_caneta;

    // Solicitar os dados do usuário
    printf("Digite o total de games vendidos: ");
    scanf("%d", &total_games);

    printf("Digite o total de calculadoras vendidas: ");
    scanf("%d", &total_calculadoras);

    printf("Digite o total de canetas vendidas: ");
    scanf("%d", &total_canetas);

    printf("Digite o preço de cada game: ");
    scanf("%f", &preco_game);

    printf("Digite o preço de cada calculadora: ");
    scanf("%f", &preco_calculadora);

    printf("Digite o preço de cada caneta: ");
    scanf("%f", &preco_caneta);

    // Calcular o faturamento com cada produto
    float faturamento_games = total_games * preco_game;
    float faturamento_calculadoras = total_calculadoras * preco_calculadora;
    float faturamento_canetas = total_canetas * preco_caneta;

    // Calcular o faturamento total
    float faturamento_total = faturamento_games + faturamento_calculadoras + faturamento_canetas;

    // Exibir os resultados
    printf("\nFaturamento com games: R$ %.2f\n", faturamento_games);
    printf("Faturamento com calculadoras: R$ %.2f\n", faturamento_calculadoras);
    printf("Faturamento com canetas: R$ %.2f\n", faturamento_canetas);
    printf("Faturamento total: R$ %.2f\n", faturamento_total);

    return 0;
}
