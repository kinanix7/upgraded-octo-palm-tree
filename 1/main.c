#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe[10];
    int age;
    char num_telephone[15];

    // Demande des informations à l'utilisateur
    printf("Entrez votre nom : ");
    scanf("%s", nom);  // Saisie du nom

    printf("Entrez votre prénom : ");
    scanf("%s", prenom);  // Saisie du prénom

    printf("Entrez votre âge : ");
    scanf("%d", &age);  // Saisie de l'âge

    printf("Entrez votre sexe (M/F) : ");
    scanf("%s", sexe);  // Saisie du sexe

    printf("Entrez votre numéro de téléphone : ");
    scanf("%s", num_telephone);  // Saisie du numéro de téléphone

    // Affichage des informations saisies
    printf("\n--- Informations personnelles ---\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Numéro de téléphone : %s\n", num_telephone);

    return 0;
}
