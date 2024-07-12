//Calculate the Simple Interest from the user inputs (PRT/100).

#include <stdio.h>

int main(){
    float principle, time, irate;
    printf("Enter the principle amount\n");
    scanf("%f", &principle);
    printf("Enter the time duration\n");
    scanf("%f", &time);
    printf("Enter the irate on the deposit\n");
    scanf("%f", &irate);

    printf("The interest on the %frs for %f years with interest rate of %f is %f", principle, time, irate, (principle*time*irate)/100);
    return 0;
}