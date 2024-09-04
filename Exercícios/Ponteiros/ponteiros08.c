#include <stdio.h>

void copiar(char *origem, char *destino) {
    while (*origem) {
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0';
}

int main() {
    char str1[] = "C Programming";
    char str2[50];
    copiar(str1, str2);
    printf("String copiada: %s\n", str2);
    return 0;
}
