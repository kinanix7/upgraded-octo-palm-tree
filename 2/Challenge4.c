#include <stdio.h>

int main() {
    int a,b,somme;
    printf("Entrez la première valeur entiere : ");
    scanf("%d",a);
    printf("Entrez la deuxième valeur entiere : ");
    scanf("%d",b);

    somme = a + b;

    if (a == b) {
        somme = 3 * somme;
    }

    printf("Le résultat est : %d\n", somme);

    return 0;
}
