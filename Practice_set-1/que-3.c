//Make a C Program to convert Celcius to Fahrenheit ({(9/5)c} + 32).

#include <stdio.h>

int main(){
    float c, f;
    printf("Enter the temperature in Celcius\n");
    scanf("%f", &c);

    f = (9.0/5.0)*c + 32;
    printf("The conversion of celcius to fahrenheit is %f", f);
    return 0;
}