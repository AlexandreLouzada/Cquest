#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    int numero, maior;

    // Solicita a entrada do usuário para o primeiro número
    printf("Digite o número %d: ", contador);
    scanf("%d", &maior);

    contador++; // Incrementa o contador

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite o número %d: ", contador);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero; // Atualiza o maior número
        }

        contador++; // Incrementa o contador
    }

    // Exibe o maior número
    printf("O maior número é: %d\n", maior);

    return 0;
}
