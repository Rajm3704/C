//Make a C program to print the table of given number n.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number whose table you want:\n");
    scanf("%d", &n);
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}