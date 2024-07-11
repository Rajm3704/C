//Make a C Program to find the Area of the Circle (3.14*r*r).

#include <stdio.h>

int main(){
    int radius;
    printf("Enter radius\n");
    scanf("%d", &radius);

    printf("The area of circle of radius %d is %f", radius, 3.14*radius*radius);
    return 0;
}