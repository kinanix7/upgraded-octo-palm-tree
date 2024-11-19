#include <stdio.h>
void echanger(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Apres l'échange dans la fonction : a = %d, b = %d\n", a, b);
}

int main() {
    int a, b;
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    printf("Avant l'echange : a = %d, b = %d\n", a, b);
    echanger(a, b);

    

    return 0;
}
