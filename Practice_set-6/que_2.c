//Write a program having variable i, print the address of i, Pass this variable to funtion and print it's address are the address same?, Why?

#include <stdio.h>

int returning_address(int *ptr){
    printf("The address of i is %d\n", ptr);
    printf("The value of i is %d\n", *ptr);
}

int main(){
    int i = 1;
    int *p = &i;

    printf("The address of i is %d\n", &i);
    returning_address(p);
    return 0;
}