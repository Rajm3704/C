//Write the C program to find greater number from 4 other numbers

#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter no.a\n");
    scanf("%d", &a);
    printf("Enter no.b\n");
    scanf("%d", &b);
    printf("Enter no.c\n");
    scanf("%d", &c);
    printf("Enter no.d\n");
    scanf("%d", &d);

    if(a>b && a>c && a>d){
        printf("a is greater than all the numbers");
    }
    else if(b>a && b>c && b>d){
        printf("b is greater than all the numbers");
    }
    else if(c>a && c>b && c>d){
        printf("c is greater than all the numbers");
    }
    else if(d>a && d>b && d>c){
        printf("d is greater then all the numbers");
    }
    return 0;
}