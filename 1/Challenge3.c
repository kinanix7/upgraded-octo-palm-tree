#include <stdio.h>

int main() {
    float meters, kilometers, miles;
    
    printf("Entrez la distance en mètres : ");
    scanf("%f", &meters);
    
    kilometers = meters / 1000;
    
    miles = kilometers / 1.609;
    
    printf("%.2f mètres correspondent à %.2f miles.\n", meters, miles);
    
    return 0;
}
