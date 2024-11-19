#include <stdio.h>
int sum(int a ,int b){
    return a+b;
}
int minus(int a ,int b){
    return a-b;
}
int multi(int a ,int b){
    return a*b;
}
int divide(int a ,int b){
    return a/b;
}
int main (){
    int a,b;
    printf("Enter un number A:");
    scanf("%d",&a);
    printf("Enter un number B :");
    scanf("%d",&b);
    
    printf(" + :%d\n",sum(a,b));
    printf(" - :%d\n",minus(a,b));
    printf(" * :%d\n",multi(a,b));
    printf(" / :%d\n",divide(a,b));
}