#include <stdio.h>

int contarCaracteres(char *str) {
    int count = 0;
    while (*str) {
        count++;
        str++;
    }
    return count;
}

int main() {
    char str[] = "Linguagem C";
    printf("Número de caracteres: %d\n", contarCaracteres(str));
    return 0;
}
