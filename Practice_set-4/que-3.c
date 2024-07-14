//Sum first 10 natural number using while loop.

#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    
    printf("The sum of first 10 natural no. is %d\n", sum);
    return 0;
}