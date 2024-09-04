#include <stdio.h>
#include <string.h>

void concatenaStrings(char str1[], char str2[], char resultado[]) {
    strcpy(resultado, str1);
    strcat(resultado, str2);
}

int main() {
    char str1[100], str2[100], resultado[200];
    
    printf("Digite a primeira string: ");
    gets(str1);
    
    printf("Digite a segunda string: ");
    gets(str2);
    
    concatenaStrings(str1, str2, resultado);
    
    printf("Resultado da concatenação: %s\n", resultado);
    
    return 0;
}
