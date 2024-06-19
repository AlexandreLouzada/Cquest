#include <stdio.h>

int main() {
    int idades[5];           // Declaração do array para armazenar as idades
    int count_maiores = 0;   // Variável para contar quantas pessoas têm 18 anos ou mais

    // Leitura das idades das 5 pessoas
    printf("Digite a idade de 5 pessoas:\n");
    for(int i = 0; i < 5; i++) {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        // Verifica se a idade é igual ou superior a 18 anos
        if(idades[i] >= 18) {
            count_maiores++;  // Incrementa o contador se a idade for 18 ou mais
        }
    }

    // Impressão da quantidade de pessoas com idade igual ou superior a 18 anos
    printf("Quantidade de pessoas com 18 anos ou mais: %d\n", count_maiores);

    return 0;
}
