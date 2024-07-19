//Call by value

/* #include <stdio.h>

int sum(int a, int b){
    a = 7;
    return a+b;
}

int main(){
    int x, y;
    printf("Enter value of x:\n");
    scanf("%d", &x);
    printf("Enter value of y:\n");
    scanf("%d", &y);

    printf("The sum is %d\n", sum(x, y));
    printf("The value of x is %d", x);
    return 0;
}   */

// Call by reference

#include <stdio.h>

int sum(int* a, int* b){
    *a = 7;
    return *a + *b;
}

int main(){
    int x, y;
    printf("Enter value of x:\n");
    scanf("%d", &x);
    printf("Enter value of y:\n");
    scanf("%d", &y);

    printf("The sum is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}