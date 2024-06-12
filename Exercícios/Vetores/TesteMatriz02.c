// Faca um programa que leia uma matriz de tamanho 3x3.
// Em seguida, imprima os valores contidos em sua
// diagonal principal (linha igual a coluna) e também a soma da diagonal principal.
#include <stdio.h>
int main()
{
    int matriz[3][3], i, j, soma;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                soma += matriz[i][j];
                printf("\nMatriz [%d][%d] = %d", i, j, matriz[i][j]);
            }
        }
    }
    printf("\n\nSoma da Diagonal Principal: %d", soma);
}