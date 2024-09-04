#include <stdio.h>
#include <string.h>

void inverteString(char str[]) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    gets(str);
    
    inverteString(str);
    
    printf("String invertida: %s\n", str);
    
    return 0;
}
