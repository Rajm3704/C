//Write a function to convert Celcius to Farenheit ({(9/5)c} + 32).

#include <stdio.h>

float t_convert(float);

int main(){
    float t_celcius;
    printf("Enter the tenperature in celcius: ");
    scanf("%f", &t_celcius);

    printf("%f C would be %f in Farenheit", t_celcius, t_convert(t_celcius));
    return 0;
}

float t_convert(float a){
    return (((9.0/5.0)*a) + 32);
}