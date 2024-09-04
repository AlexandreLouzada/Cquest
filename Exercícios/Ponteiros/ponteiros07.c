#include <stdio.h>
#include <string.h>

void concatena(char *str1, char *str2, char *resultado) {
    while (*str1) {
        *resultado = *str1;
        str1++;
        resultado++;
    }
    while (*str2) {
        *resultado = *str2;
        str2++;
        resultado++;
    }
    *resultado = '\0';
}

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World!";
    char resultado[200];
    concatena(str1, str2, resultado);
    printf("Resultado: %s\n", resultado);
    return 0;
}
