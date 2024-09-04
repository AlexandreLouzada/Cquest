#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Digite uma string: ");
    gets(str1);
    
    strcpy(str2, str1);
    
    printf("Conteúdo copiado: %s\n", str2);
    return 0;
}
