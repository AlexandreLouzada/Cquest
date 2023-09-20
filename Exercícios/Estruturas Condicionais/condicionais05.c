#include <stdio.h>

int main() {
    float altura;
    int sexo;
    float pesoIdeal;

    // Solicita a entrada do usuário
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o sexo (1 para masculino ou 2 para feminino): ");
    scanf("%d", &sexo);

    // Calcula o peso ideal com base no sexo
    if (sexo == 1) {
        pesoIdeal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com %.2f metros de altura é %.2f kg\n", altura, pesoIdeal);
    } else if (sexo == 2) {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com %.2f metros de altura é %.2f kg\n", altura, pesoIdeal);
    } else {
        printf("Opção de sexo inválida. Use 1 para masculino ou 2 para feminino.\n");
    }

    return 0;
}
