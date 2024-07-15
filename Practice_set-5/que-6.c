//Make a program to find thne sum of first n natural number.

#include <stdio.h>

int sum(int);

int main(){
    int x;
    printf("Enter no.:\n");
    scanf("%d", &x);

    printf("The sum of natural number from 1 to %d is: %d",x, sum(x));
    return 0;
}

int sum(int n){
    if(n == 0){
        return 0;
    }
    else if (n == 1)
    {
       return 1;
    }
    
    return (sum(n-1) + n);
}