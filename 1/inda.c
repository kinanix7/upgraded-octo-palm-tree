#include <stdio.h>

int main() {
    long value;

    // Demander à l'utilisateur d'entrer un nombre long
    printf("Enter a long integer value: ");
    scanf("%ld", &value);

    // Utilisation de switch pour gérer les valeurs long
    switch (value) {
        case 3000000000L:
            printf("The value is one million.\n");
            break;
        case 2000000L:
            printf("The value is two million.\n");
            break;
        case 3000000L:
            printf("The value is three million.\n");
            break;
        default:
            printf("The value is something else.\n");
            break;
    }

    return 0;
}
