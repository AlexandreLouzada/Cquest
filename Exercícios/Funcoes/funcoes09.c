#include <stdio.h>

void substituiChar(char str[], char velho, char novo) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == velho) {
            str[i] = novo;
        }
    }
}

int main() {
    char str[100];
    char velho, novo;
    
    printf("Digite uma string: ");
    gets(str);
    
    printf("Digite o caractere a ser substituido: ");
    scanf("%c", &velho);
    getchar(); // Limpa o buffer
    
    printf("Digite o novo caractere: ");
    scanf("%c", &novo);
    
    substituiChar(str, velho, novo);
    
    printf("String apos substituicao: %s\n", str);
    
    return 0;
}
