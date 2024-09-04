#include <stdio.h>

int somaArray(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    printf("A soma dos elementos do array é %d\n", somaArray(arr, tamanho));
    
    return 0;
}
