#include <stdio.h>

int main(void) {
    float nota1, nota2, nota3, media;

    // Leitura das três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média (soma das notas dividida por 3)
    media = (nota1 + nota2 + nota3) / 3;

    // Imprime a média
    printf("Média final: %.2f\n", media);

    return 0;
}
