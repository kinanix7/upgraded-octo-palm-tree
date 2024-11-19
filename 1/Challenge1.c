#include <stdio.h>

int main (){
    
    char nom[50], prenom[50], sexe[10];
    int age;
    char num_telephone[15];

        printf("Enter your nom :");
             scanf("%s",&nom); 
        printf("Enter your prenom :");
            scanf("%s",&prenom); 
        printf("Enter your sexe :");
            scanf("%s",&sexe); 
        printf("Enter your age :");
            scanf("%d",&age); 
        printf("Enter your num :");
            scanf("%s",&num_telephone); 
        
    printf("\n--- Information personnelles ---\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Age : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Numero de telephone : %s\n", num_telephone);


        return 0;

}