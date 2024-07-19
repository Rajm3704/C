//Write a program to print address variable. Use this address to get value of variable.

#include <stdio.h>

int main(){
    int a = 7; //Thala for a reason
    int* p = &a;

    printf("The value of a is %d\n", a);
    printf("The address of a is %d\n", &a);
    printf("The address of a is %d\n", p);
    printf("The value of a is %d\n", *p); //Ans
    return 0;
}