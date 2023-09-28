#include <stdio.h>

int main() {
    int idade, somaIdades = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        somaIdades += idade;
    }

    float mediaIdades = (float)somaIdades / 10;
    printf("A média das idades é: %.2f\n", mediaIdades);

    return 0;
}
