#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    trocar(&x, &y);
    printf("Após a troca: x = %d, y = %d\n", x, y);
    return 0;
}
