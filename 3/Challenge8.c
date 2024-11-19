#include <stdio.h>

int main (){
    int i,j,N;
    printf("donner un entier : ");
    scanf("%d",&N);

    for ( i = 0; i < N; i++)
    {
        for ( j = 1; i <=(N*2)-1 ; j++){
         if (j>=N-i && j<= N+i)
         
            printf("*");
            
         else printf("");
          printf("\n");
        }
        printf("\n");
    }
    
}