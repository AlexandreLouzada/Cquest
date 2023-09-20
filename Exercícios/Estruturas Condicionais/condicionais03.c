#include <stdio.h>

int main() {
    int numeroAmostra;
    float conteudoCarbono;
    int durezaRockwell;
    int resistenciaTracao;
    int grau;

    // Solicita a entrada do usuário
    printf("Digite o número da amostra: ");
    scanf("%d", &numeroAmostra);

    printf("Digite o conteúdo de carbono (em %): ");
    scanf("%f", &conteudoCarbono);

    printf("Digite a dureza Rockwell: ");
    scanf("%d", &durezaRockwell);

    printf("Digite a resistência à tração (em psi): ");
    scanf("%d", &resistenciaTracao);

    // Verifica os resultados dos testes e atribui o grau correspondente
    if (conteudoCarbono < 7 && durezaRockwell > 50 && resistenciaTracao > 80000) {
        grau = 10;
    } else if (conteudoCarbono < 7 && durezaRockwell > 50) {
        grau = 9;
    } else if (conteudoCarbono < 7) {
        grau = 8;
    } else {
        grau = 7;
    }

    // Exibe o grau obtido para a amostra
    printf("Amostra %d recebeu o grau %d\n", numeroAmostra, grau);

    return 0;
}
