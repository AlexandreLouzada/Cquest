#include <stdio.h>
#include <ctype.h>

int contaVogais(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    gets(str);
    
    printf("A string contém %d vogais.\n", contaVogais(str));
    
    return 0;
}
