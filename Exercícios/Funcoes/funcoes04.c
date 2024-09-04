#include <stdio.h>

int maiorValor(int arr[], int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int main() {
    int arr[] = {1, 8, 3, 7, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    printf("O maior valor do array é %d\n", maiorValor(arr, tamanho));
    
    return 0;
}
