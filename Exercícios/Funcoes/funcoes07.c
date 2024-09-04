#include <stdio.h>

int somaArray(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

float mediaArray(int arr[], int tamanho) {
    int soma = somaArray(arr, tamanho);
    return (float)soma / tamanho;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    printf("A média dos elementos do array é %.2f\n", mediaArray(arr, tamanho));
    
    return 0;
}
