#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float cateto1, cateto2, hipotenusa, area, semiperimetro;

    // Solicitar os dados do usuário
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    // Calcular a hipotenusa
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    // Calcular o semiperímetro
    semiperimetro = (cateto1 + cateto2 + hipotenusa) / 2;

    // Calcular a área
    area = sqrt(semiperimetro * (semiperimetro - cateto1) * (semiperimetro - cateto2) * (semiperimetro - hipotenusa));

    // Exibir os resultados
    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Área do triângulo: %.2f\n", area);

    return 0;
}
