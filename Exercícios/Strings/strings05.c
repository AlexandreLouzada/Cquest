#include <stdio.h>
#include <string.h>

int main() {
    char str[100], invertida[100];
    int i, j, tamanho;
    
    printf("Digite uma string: ");
    gets(str);
    
    tamanho = strlen(str);
    for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        invertida[j] = str[i];
    }
    invertida[j] = '\0';
    
    printf("String invertida: %s\n", invertida);
    return 0;
}
