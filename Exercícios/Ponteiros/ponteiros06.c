#include <stdio.h>

float media(int *arr, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(arr + i);
    }
    return (float)soma / tamanho;
}

int main() {
    int arr[] = {5, 10, 15, 20};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    printf("A média é %.2f\n", media(arr, tamanho));
    return 0;
}
