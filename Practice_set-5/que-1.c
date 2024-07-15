//Make a c program to find the average of 3 numbers.

#include <stdio.h>

float average_3(int, int, int);


int main(){
    int x, y, z;
    printf("Enter the no. x:\n");
    scanf("%d", &x);
    printf("Enter the no. y:\n");
    scanf("%d", &y);
    printf("Enter the no. z:\n");
    scanf("%d", &z);

    printf("The average of numbers %d, %d, %d is %f",x, y, z, average_3(x, y, z));
    return 0;
}

    float average_3(int a, int b, int c){
    return (a+b+c)/3.0;
}