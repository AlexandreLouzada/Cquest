#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    arr = (int*)malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

