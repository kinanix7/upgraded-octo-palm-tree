#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("La temperature en Fahrenheit est : %.2f\n", fahrenheit);

    return 0;
}