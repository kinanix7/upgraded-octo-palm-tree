#include <stdio.h>

int main (){

    int list[5];
    int i ;
        printf("Enter  Random 5 number : ");
    for ( i = 0; i < 5 ; i++)
    {
        scanf("%d ",&list[i]);
    }
    for ( i = 0; i < 4; i++)
    {
        printf("%d",list[i]);
    }
    



}