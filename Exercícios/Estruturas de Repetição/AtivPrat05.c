#include <stdio.h>

int main() {
    int idade, sexo, salario;
    int contador = 0;
    int soma_salarios = 0;
    int maior_idade = -1, menor_idade = 200;
    int menor_salario = 1000000, idade_menor_salario, sexo_menor_salario;

    while (1) {
        printf("Digite a idade (ou um valor negativo para sair): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite o sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);

        printf("Digite o salário: ");
        scanf("%d", &salario);

        contador++;
        soma_salarios += salario;

        if (idade > maior_idade) {
            maior_idade = idade;
        }
        if (idade < menor_idade) {
            menor_idade = idade;
        }

        if (sexo == 2 && salario <= 200) {
            // Mulheres com salário até R$ 200,00
            printf("Mulher com salário até R$ 200,00 - Idade: %d, Salário: R$%d\n", idade, salario);
        }

        if (salario < menor_salario) {
            menor_salario = salario;
            idade_menor_salario = idade;
            sexo_menor_salario = sexo;
        }
    }

    if (contador > 0) {
        double media_salarios = soma_salarios / (double)contador;
        printf("Média dos salários do grupo: R$%.2lf\n", media_salarios);
        printf("Maior idade do grupo: %d\n", maior_idade);
        printf("Menor idade do grupo: %d\n", menor_idade);
        printf("Idade e sexo da pessoa com o menor salário: Idade: %d, Sexo: %s\n", idade_menor_salario, (sexo_menor_salario == 1) ? "Masculino" : "Feminino");
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
