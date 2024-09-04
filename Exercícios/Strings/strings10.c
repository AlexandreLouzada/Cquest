#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, tamanho, palindromo = 1;
    
    printf("Digite uma string: ");
    gets(str);
    
    tamanho = strlen(str);
    
    for (i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - i - 1]) {
            palindromo = 0;
            break;
        }
    }
    
    if (palindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }
    
    return 0;
}
