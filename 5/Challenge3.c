#include <stdio.h>

int main() {
    int table[8];
    int number, i;
    int trouve = 0;

    printf("Enter 8 numbers:\n");
    for (i = 0; i < 8; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &table[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &number);

    // Recherche
    for (i = 0; i < 8; i++) {
        if (table[i] == number) {
            printf("The number %d is present at position %d.\n", number, i + 1);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("The number %d is not present in the array.\n", number);
    }

    return 0;
}
