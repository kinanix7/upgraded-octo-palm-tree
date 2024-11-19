#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) / 1.8;
    
    printf("%.2f Fahrenheit correspond à %.2f Celsius.\n", fahrenheit, celsius);
    
    return 0;
}
