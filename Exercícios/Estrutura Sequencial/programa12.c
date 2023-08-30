#include <stdio.h>

/*
Faça um programa que dado o valor da temperatura em graus FARENHEIT, calcular
e escrever o valor da temperatura em graus CELSIUS.
Fórmula: C = (F - 32)/1.8
*/

int main(void) {
  float celsius, farenheit;
 
  // Leitura do dado
    printf("Digite a temperatura em farenheit: ");
    scanf("%f", &farenheit);
  
    // Calculo em celsius
    celsius = (farenheit - 32)/1.8;

    // Imprime os resultados
    printf("Temperatura em celsius: %.2f",celsius);
}
