#include <stdio.h>

int main() {
    int idade, peso;
    double altura;
    int count = 0;
    int soma_idades = 0;
    int count_peso_altura = 0;
    int count_idade_peso_altura = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Digite o peso (em kg) da pessoa %d: ", i);
        scanf("%d", &peso);
        printf("Digite a altura (em metros) da pessoa %d: ", i);
        scanf("%lf", &altura);

        soma_idades += idade;

        if (peso > 90 && altura < 1.50) {
            count_peso_altura++;
        }

        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            count_idade_peso_altura++;
        }

        count++;
    }

    if (count > 0) {
        double media_idades = soma_idades / (double)count;
        printf("Média das idades das dez pessoas: %.2lf\n", media_idades);
        printf("Quantidade de pessoas com peso > 90 kg e altura < 1.50 m: %d\n", count_peso_altura);
        if (count_idade_peso_altura > 0) {
            double percentagem = (count_idade_peso_altura / (double)count) * 100.0;
            printf("Porcentagem de pessoas com idade entre 10 e 30 anos e altura > 1.90 m: %.2lf%%\n", percentagem);
        }
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
