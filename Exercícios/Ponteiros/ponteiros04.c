#include <stdio.h>

int maiorValor(int *arr, int tamanho) {
    int maior = *arr;
    for (int i = 1; i < tamanho; i++) {
        if (*(arr + i) > maior) {
            maior = *(arr + i);
        }
    }
    return maior;
}

int main() {
    int arr[] = {3, 8, 1, 9, 6};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    printf("O maior valor é %d\n", maiorValor(arr, tamanho));
    return 0;
}
