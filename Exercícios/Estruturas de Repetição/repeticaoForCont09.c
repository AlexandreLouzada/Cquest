#include <stdio.h>

int main() {
    printf("Fahrenheit   Celsius\n");

    for (int fahrenheit = 100; fahrenheit <= 110; fahrenheit++) {
        float celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3d           %.2f\n", fahrenheit, celsius);
    }

    return 0;
}
