//Repeat problem 3 for a general input provided by the user using scanf.

#include <stdio.h>

int main(){
    int array[10];
    int x;
    printf("Enter x:\n");
    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
    {
        array[i] = x * (i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d is %d\n", x, i+1, array[i]);
    }
    
    return 0;
}