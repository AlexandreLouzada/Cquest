#include <stdio.h>

int main(void) {
    int vitorias, derrotas, empates;
    int pontos_vitorias = 3, pontos_empate = 1, pontos_derrota = 0;
    int total_jogos, pontos_disputados, pontos_ganhos, pontos_perdidos;

    // Solicita a quantidade de vitórias, derrotas e empates
    printf("Digite a quantidade de vitórias: ");
    scanf("%d", &vitorias);

    printf("Digite a quantidade de derrotas: ");
    scanf("%d", &derrotas);

    printf("Digite a quantidade de empates: ");
    scanf("%d", &empates);

    // Calcula o total de jogos
    total_jogos = vitorias + derrotas + empates;

    // Calcula a quantidade total de pontos disputados
    pontos_disputados = total_jogos * pontos_vitorias;

    // Calcula a quantidade de pontos ganhos
    pontos_ganhos = (vitorias * pontos_vitorias) + (empates * pontos_empate);

    // Calcula a quantidade de pontos perdidos
    pontos_perdidos = pontos_disputados - pontos_ganhos;

    // Imprime os resultados
    printf("Total de jogos: %d\n", total_jogos);
    printf("Pontos disputados: %d\n", pontos_disputados);
    printf("Pontos ganhos: %d\n", pontos_ganhos);
    printf("Pontos perdidos: %d\n", pontos_perdidos);

    return 0;
}
