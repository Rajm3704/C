#include <stdio.h>

//Function Prototype
int sum(int, int);

//Function Definition
int sum(int x, int y){
    printf("The Sum is %d", x+y);
    return x+y;
}

int main(){
    int a, b;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);

    sum(a, b);
    return 0;
}