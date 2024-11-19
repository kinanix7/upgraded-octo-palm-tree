#include <stdio.h>
int main(){
    int number ;

    printf("Enter un nombre entre 0 et 20 :");
    scanf("%d",&number);
    
    if (number < 0 || number > 20) {
        printf("Le nombre doit etre entre 0 et 20.\n ");
    } else {
      if (number >= 10) { 
        printf("valid\n"); 
        } else { 
    printf("invalide\n");
    
}}}