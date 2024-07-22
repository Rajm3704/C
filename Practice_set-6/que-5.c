//Write a program to calculate the sum and average of two numbers.Use pointer to print the values.

#include <stdio.h>

int sum(int x, int y){
    return x+y;
}

float avg(int x, int y){
    return (x+y)/2;
}

int main(){
    int a, b;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);

    printf("The sum of numbers %d and %d is %d\n", a, b, sum(a, b));
    printf("The average of numbers %d and %d is %f\n", a, b, avg(a, b));
    return 0;
}