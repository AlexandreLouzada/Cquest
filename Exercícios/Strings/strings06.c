#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    printf("Digite a primeira string: ");
    gets(str1);
    
    printf("Digite a segunda string: ");
    gets(str2);
    
    strcat(str1, str2);
    
    printf("Strings concatenadas: %s\n", str1);
    return 0;
}
