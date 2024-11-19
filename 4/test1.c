#include <stdio.h>

int myFunc(char name[] , int age ){
    printf("My name is : %s end my age is : %d olde\n",name,age);
}
int main (){
    myFunc("Youness",19);
    myFunc("Wassim",23);
    myFunc("Yousef",21);
    myFunc("Max",12);
    myFunc("kadija ",21);
}