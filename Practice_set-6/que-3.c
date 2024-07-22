//Write a program to change the value of that variable by it's 10 times.

#include <stdio.h>

void val_change(int* x){
    *x = *x * 10;
}

int main(){
    int i = 2;

    printf("The value of i is: %d", i);
    val_change(&i);
    printf("The value of i is: %d", i);

    return 0;
}