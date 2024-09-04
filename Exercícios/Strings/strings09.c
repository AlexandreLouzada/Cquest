#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j = 0;
    char novaStr[100];
    
    printf("Digite uma string: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            novaStr[j++] = str[i];
        }
    }
    novaStr[j] = '\0';
    
    printf("String sem espaços: %s\n", novaStr);
    return 0;
}
