#include <stdio.h>

int main() {
    char nome_equipe[50];
    int vitorias, empates, derrotas;
    float percentual_aproveitamento;

    // Solicitar os dados do usuário
    printf("Digite o nome da equipe de futebol: ");
    scanf("%s", nome_equipe);

    printf("Digite a quantidade de vitórias: ");
    scanf("%d", &vitorias);

    printf("Digite a quantidade de empates: ");
    scanf("%d", &empates);

    printf("Digite a quantidade de derrotas: ");
    scanf("%d", &derrotas);

    // Calcular o total de pontos
    int total_pontos = (vitorias * 3) + empates;

    // Calcular o total de partidas
    int total_partidas = vitorias + empates + derrotas;

    // Calcular o percentual de aproveitamento
    percentual_aproveitamento = ((float)total_pontos / (total_partidas * 3)) * 100;

    // Exibir os resultados
    printf("\nEquipe: %s\n", nome_equipe);
    printf("Total de pontos: %d\n", total_pontos);
    printf("Total de partidas: %d\n", total_partidas);
    printf("Percentual de aproveitamento: %.2f%%\n", percentual_aproveitamento);

    return 0;
}
