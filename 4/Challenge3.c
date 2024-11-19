#include <stdio.h>
#include <stdbool.h>

bool isPremier(int n){
    if (n <=1)
    {
        return false;
    }
    for(int i =2 ; i<n;i++){
        if (n % i == 0){
            return false ;
        }
      else 
      return true;
        
    }

    
}

int main(){

int n ;
printf("Entere le num :");
scanf("%d",&n);
 if (isPremier(n))
    {
        printf("Le nombre premier : %d",n);
    }else

    printf("Le nombre  NOM premier : %d",n);
    printf("N= %d",isPremier(n)); 
}