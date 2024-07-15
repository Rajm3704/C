//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2 (f=m*g).

#include <stdio.h>

float force(float);

int main(){
    float mass;
    printf("Enter mass in kg: ");
    scanf("%f", &mass);

    printf("The force on mass %f kg is %f Newton", mass, force(mass));
    return 0;
}

float force(float x){
    return (x*9.8);
}