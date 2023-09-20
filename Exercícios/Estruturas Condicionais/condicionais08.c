#include <stdio.h>

int main() {
    float num1, num2, num3, maior;

    // Solicita a entrada do usuário para os três números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    // Verifica se os números são diferentes
    if (num1 != num2 && num1 != num3 && num2 != num3) {
        // Encontra o maior número
        if (num1 > num2 && num1 > num3) {
            maior = num1;
        } else if (num2 > num1 && num2 > num3) {
            maior = num2;
        } else {
            maior = num3;
        }

        // Exibe o maior número
        printf("O maior número é: %.2f\n", maior);
    } else {
        printf("Os valores digitados não são diferentes\n");
    }

    return 0;
}
