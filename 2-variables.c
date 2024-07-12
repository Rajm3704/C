#include<stdio.h>

int main(){
    int a; //Variable declaration(4 byte)
    a = 4; //Variable initialization
    printf("The value of a is %d\n", a);
    float b = 2.3; //Decimal Values(4 byte)
    char c = 'w'; //Character values(1 byte)
    int x;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("The value of x is %d\n", x);
}


/* Rules of variables in C
1 Variable name can only starts with alphabets or underscore.
2 No special character rather than "_" is allowed.
3 Variable names are case sensitive. */