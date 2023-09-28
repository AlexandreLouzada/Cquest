#include <stdio.h>

int main() {
    int fahrenheit = 100;
    printf("Fahrenheit   Celsius\n");

    while (fahrenheit <= 110) {
        float celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3d           %.2f\n", fahrenheit, celsius);
        
        fahrenheit++; // Incrementa o valor de Fahrenheit
    }

    return 0;
}
