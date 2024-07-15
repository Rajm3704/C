#include <stdio.h>

    int factorial(int);

    int factorial(int n){
        if (n==1 || n==0)
        {
            return 1;
        }
        
        return factorial(n-1) * n;
    }

int main(){
    int x;
    printf("Enter the no.\n");
    scanf("%d", &x);
    int fact = factorial(x);
    printf("The factorial of %d is %d", x, fact);
    return 0;
}