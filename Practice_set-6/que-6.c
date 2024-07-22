//Write a program to print the value of variable i by using pointer to pointer

#include <stdio.h>

int main(){
    int i = 2;
    int *p1 = &i;
    int **p2 = &p1;

    printf("i is %u\n", &i);
    printf("i is %u\n", p1);
    printf("p1 is %u\n", &p1);
    printf("p1 is %u\n", p2);
    printf("value of i is %d\n", **p2);
    return 0;
}