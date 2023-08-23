#include <stdio.h>

int main(void) {
    int numero1, numero2;
    float media, metadeDiferenca;

    // Leitura dos dois números inteiros
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Calcula a média aritmética
    media = (numero1 + numero2) / 2.0;

    // Calcula a metade da diferença entre os números
    metadeDiferenca = (float)(numero1 - numero2) / 2;

    // Imprime os resultados
    printf("Média aritmética: %.2f\n", media);
    printf("Metade da diferença: %.2f\n", metadeDiferenca);

    return 0;
}
