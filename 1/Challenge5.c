#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) / 1.8;
    
        printf("%.2f Fahrenheit correspond à %.2f Celsius.\n", fahrenheit, celsius);
    
    if (celsius <= 0) {
        printf("Sensation ressentie : très froid\n");
    } else if (celsius > 0 && celsius <= 15) {
        printf("Sensation ressentie : froid\n");
    } else if (celsius > 15 && celsius <= 25) {
        printf("Sensation ressentie : chaud\n");
    } else {
        printf("Sensation ressentie : très chaud\n");
    }
    
    return 0;
}
