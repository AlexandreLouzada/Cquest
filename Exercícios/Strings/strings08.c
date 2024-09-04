#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[50];
    char *pos;
    
    printf("Digite a string principal: ");
    gets(str);
    
    printf("Digite a substring: ");
    gets(substr);
    
    pos = strstr(str, substr);
    
    if (pos) {
        printf("A substring foi encontrada na posição %ld.\n", pos - str);
    } else {
        printf("Substring não encontrada.\n");
    }
    return 0;
}
