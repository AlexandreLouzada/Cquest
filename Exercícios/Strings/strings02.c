#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Digite uma string: ");
    gets(str);
    
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
    
    printf("String em maiusculas: %s\n", str);
    return 0;
}
