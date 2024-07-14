//Make a program to find the factorial of given number.

#include <stdio.h>

int main(){
    int fact=1, n;
    printf("Enter the number\n");
    scanf("%d",&n);

    if (n==0)
    {
        printf("Factorial of 0 is 1");
    }
    
    else {
        for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
        printf("The factorial of given number %d is %d", n, fact);
    }
    return 0;
}