#include <stdio.h>
int main() {
    int number, sum = 0, max = 0;
    printf("Entrez une série d'entiers positifs inférieurs à 100 (0 pour terminer) :\n");
    
    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break;
        }
        if (number < 100 && number > 0 && number % 10 == 0) {
  
        sum += number;

        if (number > max) {
            max = number;
        }}
        }

    printf("Somme des elements : %d\n", sum);
    printf("Maximum: %d\n", max);

    return 0;
} 
