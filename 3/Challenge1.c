#include <stdio.h>
int main (){
    int nombre ,i;
    printf("Enter le nombre :");
    scanf("%d",&nombre);
    for (i = 1 ; i <= 10 ; i++){
        printf("%d\n", i*nombre);
    }
}