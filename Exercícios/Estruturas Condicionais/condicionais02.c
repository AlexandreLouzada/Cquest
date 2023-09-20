#include <stdio.h>

int main() {
    int numero;

    // Solicita a entrada do usuário
    printf("Digite um número inteiro entre 1 e 7: ");
    scanf("%d", &numero);

    // Verifica se o número está dentro do intervalo 1-7 e imprime o dia correspondente
    switch (numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia Inválido\n");
    }

    return 0;
}
