#include <stdio.h>

int main (){
    int number [5];
    int i ;

    printf("Enter 5 number entiers  :\n ");

    for ( i = 0; i < 5; i++)
    {
        printf("Nomber%d: ", i + 1);
        scanf("%d",&number[i]);

    }
    printf("Les nomber dans l'ordre inverse sont : \n");

    for ( i = 4 ; i >= 0 ; i--)
    {
        printf("%d\n",number[i]);
    }
    
    
}