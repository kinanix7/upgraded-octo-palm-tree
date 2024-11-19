#include <stdio.h>

int main() {
    int a, b;
    
    printf("Entrez deux entiers a et b :\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    printf("\nRésultats des opérations :\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, (float)a / b); 
    printf("%d %% %d = %d\n", a, b, a % b);

    return 0;
}
