#include <stdio.h>
int main (){
    float number [10];
    float Somme ,Moyenne;
    int i;
        printf("Enter un number :\n");
    for ( i = 0; i < 10; i++)
    {
        printf(" number %d :",i + 1);
        scanf("%f",&number[i]);
    
    }
    for ( i = 0; i < 10; i++)
    {
        Somme = Somme + number[i];

    }
    Moyenne =  Somme / 10 ;
    printf(" La Somme est : %.2f\n ",Somme);
    printf(" La Moyenne est : %.2f ",Moyenne);

    
    
}