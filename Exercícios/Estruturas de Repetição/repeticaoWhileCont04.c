#include <stdio.h>

int main() {
    int contador = 1; // Inicializa o contador em 1
    int sexo, totalMasculino = 0, totalFeminino = 0; // Inicializa os totais em 0

    // Enquanto o contador for menor ou igual a 10, faça:
    while (contador <= 10) {
        printf("Digite o sexo da pessoa %d (1 para masculino, 2 para feminino): ", contador);
        scanf("%d", &sexo);

        if (sexo == 1) {
            totalMasculino++; // Incrementa o total de pessoas do sexo masculino
        } else if (sexo == 2) {
            totalFeminino++; // Incrementa o total de pessoas do sexo feminino
        } else {
            printf("Opção inválida. Use 1 para masculino ou 2 para feminino.\n");
            continue; // Volta para o início do loop
        }

        contador++; // Incrementa o contador
    }

    // Calcula o total de pessoas cadastradas
    int totalPessoas = totalMasculino + totalFeminino;

    // Exibe os resultados
    printf("Total de pessoas cadastradas: %d\n", totalPessoas);
    printf("Total de pessoas do sexo masculino: %d\n", totalMasculino);
    printf("Total de pessoas do sexo feminino: %d\n", totalFeminino);

    return 0;
}
