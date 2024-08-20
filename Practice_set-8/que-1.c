//Write a program to take string as an input from the user using %c and %s confirm that the strings are equal

#include <stdio.h>

int main(){
    char s[20];
    printf("enter string\n");
    scanf("%c", &s);
    printf("the string is %c\n", s);
    return 0;
}