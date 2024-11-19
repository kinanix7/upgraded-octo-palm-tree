 #include <stdio.h>

 int main (){
    int p,i;
    printf("Donnerz un entier :\n");
    scanf("%d",&p);

    for(i = 2; i * i <= p; i++)
    {
        if (p % i == 0) {
            printf("Le nombre n'est pas premier.\n");
            return 0;
        }
    }
    
    printf("Le nombre est premier.\n");

 }