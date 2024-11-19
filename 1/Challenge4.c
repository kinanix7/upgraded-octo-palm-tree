#include <stdio.h>

int main() {
    float miles, kilometers, meters;
    
    printf("Entrez la distance en miles : ");
    scanf("%f", &miles);
    
    kilometers = miles * 1.609;
    
    meters = kilometers * 1000;
    
    printf("%.2f miles correspondent a %.2f metres.\n", miles, meters);
    
    return 0;
}
