#include <stdio.h>
#include <math.h>
int main (){
    float x1,y1,x2,y2,MN;
    
    printf("Enter X1 :");
    scanf("%f",&x1);

    printf("Enter Y1 :");
    scanf("%f",&y1);

    printf("Enter X2 :");
    scanf("%f",&x2);

    printf("Enter Y2 :");
    scanf("%f",&y2);
    
    MN=sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf(" D : %.2f",MN);
}