//Make a C Program to find the area of a rectangle with user inputs of dimension (l*b).

#include <stdio.h>

int main(){
    int length;
    int breadth;
    printf("Enter length\n");
    scanf("%d", &length);
    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of length %d and breadth %d is %d", length, breadth, length*breadth);
    return 0;
}